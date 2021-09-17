#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->show();
    ui->statusbar->showMessage(QString("Current Filter: Show All "));

    //setup data models (the tables share the same data model)
    modelContacts = new QStandardItemModel(this);
    modelProxyContacts = new QSortFilterProxyModel(this);
    modelProxyContacts->setSourceModel(modelContacts);
    modelCategory = new QStandardItemModel(this);

    QStringList headerLst = Contact::getFieldNames();
    modelContacts->setHorizontalHeaderLabels(headerLst);

    ui->tableViewContact->setModel(modelProxyContacts);
    ui->tableViewTelephone->setModel(modelProxyContacts);
    ui->tableViewAddress->setModel(modelProxyContacts);
    ui->cmbSelectCategory->setModel(modelCategory);

    //setup tables to share a single selection model
    QItemSelectionModel *selectionModel = ui->tableViewContact->selectionModel();
    ui->tableViewAddress->setSelectionModel(selectionModel);
    ui->tableViewTelephone->setSelectionModel(selectionModel);


    //load xml data if present
    QString path = "contactLst.xml";
    if (XmlSerializer::fileExist(path)){
        int retval = QMessageBox::question(this, "Load", "Would you like to load the last session's data?",
                                           QMessageBox::Yes | QMessageBox::Cancel);
        if (retval == QMessageBox::Yes){
            //importing
            contactLst = XmlSerializer::readFromXmlFile(path);
            foreach (Contact *c, contactLst->getContactQList()){
                loadData(c);
            }
            QStringList categoryStrLst = contactLst->getCategoryStringList();
            for (int i = 0; i < categoryStrLst.length(); i++){
                on_newCategoryAdded(categoryStrLst[i].toInt());
            }
        } else {
            contactLst = new ContactList();
        }
    } else {
        //nothing to import
        contactLst = new ContactList();
    }

    //contactLst = new ContactList();
    QObject::connect(contactLst, SIGNAL(newCategoryAdded(int)),
                     this, SLOT(on_newCategoryAdded(int)));
    QObject::connect(contactLst, SIGNAL(deletedCategory(int)),
                     this, SLOT(on_deletedCategory(int)));

    //connect(ui->tableView->selectionModel(), &QItemSelectionModel::selectionChanged, this, &WhateverYourClassIsNamed::on_tableViewSelection);
    connect(selectionModel, &QItemSelectionModel::selectionChanged,
            this, &MainWindow::attemptToEnable_DeleteBtn);

    //on load hide columns
    hideTableColumns();
    isFiltered = false;


}

MainWindow::~MainWindow()
{
    delete contactLst;
    delete ui;
    delete modelProxyContacts;
    delete modelContacts;
    delete modelCategory;
}

//clear filter and add ui items to model & contactList
void MainWindow::on_btnAdd_clicked()
{
    on_btnShowAll_clicked(); //clear filter
    Contact *c = new Contact(contactLst->getSize(),
                             ui->spnCategory->value(),
                             ui->txtFirstName->text(),
                             ui->txtLastName->text(),
                             ui->txtStreetAddress->text(),
                             ui->txtZipCode->text(),
                             ui->txtCity->text(),
                             ui->txtPhoneNr->text());
    contactLst->add(c);
    loadData(c);

    //clear form
    ui->spnCategory->setValue(0);
    ui->txtFirstName->clear();
    ui->txtLastName->clear();
    ui->txtStreetAddress->clear();
    ui->txtZipCode->clear();
    ui->txtCity->clear();
    ui->txtPhoneNr->clear();
}

//load contacts to model
void MainWindow::loadData(Contact *c){
    QStringList strLst = c->toString().split(", ");
    int row = modelContacts->rowCount();
    for (int col = 0; col < strLst.length(); col++){
        QStandardItem *item = new QStandardItem(QString("%1").arg(strLst.at(col)));
        modelContacts->setItem(row, col, item);
    }
    //modelProxyContacts->sort(2);
    hideTableColumns();
}

//delete ui items from model & contactList
void MainWindow::on_btnDelete_clicked()
{
    on_btnShowAll_clicked();
    //remove contact form contactLst
    QList<QModelIndex> selectionQModelLst = ui->tableViewContact->selectionModel()->selectedRows();
    for (int i = 0; i < selectionQModelLst.length(); i++){
        int pk = modelContacts->data(modelContacts->index(selectionQModelLst[i].row(), 0)).toInt();
        contactLst->remove(pk);
    }

    //remove contact form model
    int len = selectionQModelLst.length();
    if (len > 0){
        modelContacts->removeRows(selectionQModelLst[0].row(), len);
    }

    //removal from combobox is handled by singals & slots
}

//attempt to enable the delete btn
void MainWindow::attemptToEnable_DeleteBtn(){
    if (ui->tableViewContact->selectionModel()->hasSelection() and isFiltered == false){
        ui->btnDelete->setEnabled(true);
    }
}

//filter model on category indexChange & disable delete btn
void MainWindow::on_cmbSelectCategory_currentIndexChanged(int index)
{
    ui->tableViewContact->selectionModel()->clearSelection();
    QString categoryValue = modelCategory->data(modelCategory->index(index, 0)).toString();
    modelProxyContacts->setFilterKeyColumn(1);
    modelProxyContacts->setFilterRegExp(QRegExp(QString("%1").arg(categoryValue)));
    ui->btnDelete->setEnabled(false);
    isFiltered = true;
    ui->statusbar->showMessage(QString("Current Filter: %1 - Delete disable (Click 'Show All' & Select a row to Enable)").arg(categoryValue));
}

//update combobox categories
void MainWindow::on_newCategoryAdded(int category)
{
    QStandardItem *item = new QStandardItem(QString("%1").arg(category));
    modelCategory->setItem(modelCategory->rowCount(), item);
}

void MainWindow::on_deletedCategory(int category)
{
    int row = modelCategory->findItems(QString("%1").arg(category))[0]->row();
    ui->cmbSelectCategory->removeItem(row);
}

//hide table view columns for each type of list to be displayed
void MainWindow::hideTableColumns(){
    ui->tableViewContact->setColumnHidden(0, true);
    ui->tableViewContact->resizeColumnsToContents();
    ui->tableViewTelephone->setColumnHidden(0, true);
    ui->tableViewTelephone->setColumnHidden(1, true);
    ui->tableViewTelephone->setColumnHidden(3, true);
    ui->tableViewTelephone->setColumnHidden(4, true);
    ui->tableViewTelephone->setColumnHidden(5, true);
    ui->tableViewTelephone->resizeColumnsToContents();
    ui->tableViewAddress->setColumnHidden(0, true);
    ui->tableViewAddress->setColumnHidden(1, true);
    ui->tableViewAddress->setColumnHidden(6, true);
    ui->tableViewAddress->resizeColumnsToContents();
}

//clear current filters and show all data
void MainWindow::on_btnShowAll_clicked()
{
    ui->cmbSelectCategory->setCurrentIndex(-1);
    modelProxyContacts->setFilterRegExp("");
    ui->statusbar->showMessage(QString("Current Filter: Show All - (Select a row to Enable Delete)"));
    attemptToEnable_DeleteBtn();
    isFiltered = false;
    //modelProxyContacts->sort(2);
}

void MainWindow::closeEvent(QCloseEvent *){
    //save on close
    XmlSerializer::writeToXmlFile(contactLst, "contactLst.xml");
}
