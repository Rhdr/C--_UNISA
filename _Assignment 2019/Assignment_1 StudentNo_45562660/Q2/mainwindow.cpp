#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(bool showAppBeforeLoadMsgBox, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    //setup ui & connections
    ui->setupUi(this);
    radioBtnGroup = new QButtonGroup(this);
    radioBtnGroup->addButton(ui->radNotProfit, 1);
    radioBtnGroup->addButton(ui->radProfit, 2);
    QObject::connect(radioBtnGroup, SIGNAL(buttonClicked(int)),
                     this, SLOT(radioBtnGroup_buttonClicked(int)));

    //show the app before the QMessegebox
    if(showAppBeforeLoadMsgBox){
        show();
    }

    //load from file
    if(Serializer::saveExist("saved_CompanyNonProfitLst.txt") && Serializer::saveExist("saved_CompanyProfitLst.txt")){
        int retvalMsgLoad = QMessageBox::question(this, "Load from file",
                                                  "Do you wish to load the last saved session's data?",
                                                  QMessageBox::Yes | QMessageBox::No);
        if(retvalMsgLoad == QMessageBox::Yes){
            //load from file
            QList<Company*> companyLstTemp = Serializer::readFromFile("saved_CompanyNonProfitLst.txt");
            for(int companyNo = 0; companyNo < companyLstTemp.length(); companyNo++){
                companyLst.append(companyLstTemp[companyNo]);
                ui->listWidgetNonProfit->addItem(companyLstTemp[companyNo]->toString());
            }
            ui->listWidgetNonProfit->sortItems();

            QList<Company*> companyLstTemp1 = Serializer::readFromFile("saved_CompanyProfitLst.txt");
            for(int companyNo = 0; companyNo < companyLstTemp1.length(); companyNo++){
                companyLst.append(companyLstTemp1[companyNo]);
                ui->listWidgetProfit->addItem(companyLstTemp1[companyNo]->toString());
            }
            ui->listWidgetProfit->sortItems();
        }
    }
}

MainWindow::~MainWindow()
{
    delete radioBtnGroup;
    delete ui;
}

void MainWindow::radioBtnGroup_buttonClicked(int id)
{
    (void)id;
    activateAddBtn();
}

void MainWindow::on_radProfit_clicked()
{
    //Profit Company
    ui->spnEmployees->setEnabled(true);
    ui->lblEmployees->setEnabled(true);
    ui->spnEmployees->setValue(0);
    ui->chkCharitable->setEnabled(false);
    ui->lblCharitable->setEnabled(false);
    ui->chkCharitable->setChecked(false);
}

void MainWindow::on_radNotProfit_clicked()
{
    //Non Profit Company
    ui->spnEmployees->setEnabled(false);
    ui->lblEmployees->setEnabled(false);
    ui->spnEmployees->setValue(0);
    ui->chkCharitable->setEnabled(true);
    ui->lblCharitable->setEnabled(true);
    ui->chkCharitable->setChecked(false);
}

void MainWindow::on_btnAdd_clicked()
{
    if (ui->radProfit->isChecked()){
        //Profit Company
        Company *cProfit = new CompanyProfit(this,
                                               false,
                                               ui->txtName->text(),
                                               ui->datDate->date(),
                                               ui->spnEmployees->value());
        companyLst.append(cProfit);
        ui->listWidgetProfit->addItem(cProfit->toString());
        ui->listWidgetProfit->sortItems();

    } else {
        //Non Profit Company
        Company *cNonProfit = new CompanyNonProfit(this,
                                                    true,
                                                    ui->txtName->text(),
                                                    ui->datDate->date(),
                                                    ui->chkCharitable->isChecked());
        companyLst.append(cNonProfit);
        ui->listWidgetNonProfit->addItem(cNonProfit->toString());
        ui->listWidgetNonProfit->sortItems();
    }

}

void MainWindow::on_btnDeleteProfit_clicked()
{
    deleteCompany(false, ui->listWidgetProfit);
}

void MainWindow::on_btnDeleteNonProfit_clicked()
{
    deleteCompany(true, ui->listWidgetNonProfit);
}

void MainWindow::deleteCompany(bool isNPO, QListWidget *listWidget)
{
    //get meta object & access variable
    QVariant companyPropVarLst;
    if(isNPO){
        companyPropVarLst = companyLst.property("companyNonProfitLst");
    } else {
        companyPropVarLst = companyLst.property("companyProfitLst");
    }
    QList<Company*> companyLstTemp = companyPropVarLst.value<QList<Company*> >();

    //delete items
    int retvalMsgDel = QMessageBox::warning(this, "Confirm Delete",
                                            "Are you sure you wish to delete the selected items?",
                                            QMessageBox::Yes | QMessageBox::Cancel);
    if(retvalMsgDel == QMessageBox::Yes){
        //delete selected items
        QList<QListWidgetItem *> items = listWidget->selectedItems();
        for(int i = 0; i < items.length(); i++){
            QListWidgetItem *item = listWidget->takeItem(listWidget->row(items[i])); //delete from ui
            companyLst.remove(isNPO, item->text());
            delete item;
        }
    }
}

void MainWindow::on_listWidgetProfit_itemSelectionChanged()
{
    //enable delete button if an item is selected
    enableDeleteBtn(ui->listWidgetProfit, ui->btnDeleteProfit);
}

void MainWindow::on_listWidgetNonProfit_itemSelectionChanged()
{
    //enable delete button if an item is selected
    enableDeleteBtn(ui->listWidgetNonProfit, ui->btnDeleteNonProfit);
}

void MainWindow::enableDeleteBtn(QListWidget *listWidget, QPushButton *button)
{
    //enable delete button if an item is selected
    int itemCount = listWidget->selectedItems().length();
    if(itemCount > 0){
        button->setEnabled(true);
    } else {
        button->setEnabled(false);
    }
}

void MainWindow::activateAddBtn()
{
    //activate the add btn if the company type & name is entered
    int checkedId = radioBtnGroup->checkedId();
    if((checkedId > -1) && (!ui->txtName->text().isEmpty())){
        //enable
        ui->btnAdd->setEnabled(true);
    } else {
        //disable
        ui->btnAdd->setEnabled(false);
    }
}

void MainWindow::on_txtName_textChanged(const QString &arg1)
{
    (void)arg1;
    activateAddBtn();
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    int retvalMsg = QMessageBox::question(this, "Save on Close",
                                          "Do you wish to save before closing the application?",
                                          QMessageBox::Yes | QMessageBox::No | QMessageBox::Cancel);
    if(retvalMsg == QMessageBox::Yes){
        //try to save on failure notify user
        //extract the profit & nonProfit qlists from the companyLst object
        QVariant companyProfitPropVarLst = companyLst.property("companyProfitLst");
        QVariant companyNonProfitPropVarLst = companyLst.property("companyNonProfitLst");
        QList<Company*> companyProfitPropLst = companyProfitPropVarLst.value<QList<Company*> >();
        QList<Company*> companyNonProfitPropLst = companyNonProfitPropVarLst.value<QList<Company*> >();

        //write lists to file
        bool isSavedProfit = Serializer::writeToFile(companyProfitPropLst, "saved_CompanyProfitLst.txt");
        bool isSavedNonProfit = Serializer::writeToFile(companyNonProfitPropLst, "saved_CompanyNonProfitLst.txt");
        if(isSavedProfit == false or isSavedNonProfit == false){
            int retvalMsgSaveErr = QMessageBox::warning(this, "Save Error",
                                                    "Sorry, could not save the data, exiting now will result in data loss.\n"
                                                    "Do you still wish to exit the appplication?",
                                                    QMessageBox::Yes, QMessageBox::Cancel);
            if(retvalMsgSaveErr == QMessageBox::Cancel){
                //cancel
                event->ignore();
            }
        }
    } else if(retvalMsg == QMessageBox::Cancel){
        //cancel
        event->ignore();
    }
}
