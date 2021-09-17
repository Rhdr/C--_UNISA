#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(bool showAppBeforeLoadMsgBox, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    //setup ui & connections
    ui->setupUi(this);
    radioBtnGroup = new QButtonGroup(this);
    radioBtnGroup->addButton(ui->radNotProfit, 0);
    radioBtnGroup->addButton(ui->radProfit, 1);
    QObject::connect(radioBtnGroup, SIGNAL(buttonClicked(int)),
                     this, SLOT(radioBtnGroup_buttonClicked(int)));

    //show the app before the QMessegebox
    if(showAppBeforeLoadMsgBox){
        show();
    }

    //if there is a saved file ask user if he/she wish to load it
    QString path = "backup.txt";
    if(Serializer::saveExist(path)){
        int retvalMsgLoad = QMessageBox::question(this, "Load from file",
                                                  "Do you wish to load the last saved session's data?",
                                                  QMessageBox::Yes | QMessageBox::No);
        if(retvalMsgLoad == QMessageBox::Yes){
            //load from file
            //QList<Company*> companyLstTemp = Serializer::readFromFile(path);
            companyLst = Serializer::readFromFile(path);
            //for(int companyNo = 0; companyNo < companyLstTemp.length(); companyNo++){
            for(int companyNo = 0; companyNo < companyLst.length(); companyNo++){
                //companyLst.append(companyLstTemp[companyNo]);
                ui->listWidget->addItem(companyLst[companyNo]->toString());
            }
            ui->listWidget->sortItems();
        }
    }
}

MainWindow::~MainWindow()
{
    //delete radioBtnGroup;
    qDeleteAll(companyLst);
    companyLst.clear();
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
        CompanyProfit *cProfit = new CompanyProfit(this,
                                                   false,
                                                   ui->txtName->text(),
                                                   ui->datDate->date(),
                                                   ui->spnEmployees->value());  //do not delete pointer, appended to list
        companyLst.append(cProfit);
        ui->listWidget->addItem(cProfit->toString());

    } else {
        //Non Profit Company
        CompanyNonProfit *cNonProfit = new CompanyNonProfit(this,
                                                            true,
                                                            ui->txtName->text(),
                                                            ui->datDate->date(),
                                                            ui->chkCharitable->isChecked());    //do not delete pointer, appended to list
        companyLst.append(cNonProfit);
        ui->listWidget->addItem(cNonProfit->toString());
    }
    ui->listWidget->sortItems();
}

void MainWindow::on_btnDelete_clicked()
{
    //delete items
    int retvalMsgDel = QMessageBox::warning(this, "Confirm Delete",
                                            "Are you sure you wish to delete the selected items?",
                                            QMessageBox::Yes | QMessageBox::Cancel);
    if(retvalMsgDel == QMessageBox::Yes){
        //delete selected items
        QList<QListWidgetItem *> items = ui->listWidget->selectedItems();
        for(int i = 0; i < items.length(); i++){
            QListWidgetItem *item = ui->listWidget->takeItem(ui->listWidget->row(items[i])); //delete from ui

            for(int j = 0; j < companyLst.length(); j++){
                if(companyLst[j]->toString() == item->text()){
                    companyLst.removeAt(j); //delete from companyLst
                    break;
                }
            }
            delete item;
        }
    }
}

void MainWindow::on_listWidget_itemSelectionChanged()
{
    //enable delete button if an item is selected
    int itemCount = ui->listWidget->selectedItems().length();
    if(itemCount > 0){
        ui->btnDelete->setEnabled(true);
    } else {
        ui->btnDelete->setEnabled(false);
    }
}

void MainWindow::activateAddBtn()
{
    //activate the add btn if the company type & name is entered
    //if(ui->btnAdd->isEnabled() == false){
    int checkedId = radioBtnGroup->checkedId();
    if((checkedId > -1) && (!ui->txtName->text().isEmpty())){
        //enable
        ui->btnAdd->setEnabled(true);
    } else {
        //disable
        ui->btnAdd->setEnabled(false);
    }
    //}
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
        bool isSaved = Serializer::writeToFile(companyLst, "backup.txt");
        if(isSaved == false){
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
