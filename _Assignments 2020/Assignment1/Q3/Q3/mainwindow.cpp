#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "journal.h"
#include <QStringList>
#include <QModelIndexList>
#include <QDebug>
#include <QIntValidator>
#include <QRegExpValidator>
#include <QDate>
#include "customdelegate.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    model = new Model();
    modelProxy = new QSortFilterProxyModel(this);
    modelProxy->setSourceModel(model);
    //ui->tableView->setModel(model);
    ui->tableView->setModel(modelProxy);
    CustomDelegate *delegate = new CustomDelegate();
    //ui->tableView->setItemDelegateForColumn(1, delegate);
    ui->tableView->setItemDelegate(delegate);
    //ui->tableView->setItemDelegate(delegate);
    //ui->tableView->setSortingEnabled(true );

    QIntValidator *v = new QIntValidator();
    ui->txtAuthor->setValidator(v);

    QStringList strHeaderLst = Journal::getQStdHeaderList();
    model->insertColumns(0, strHeaderLst.count());
    for(int i = 0; i < strHeaderLst.count(); i++){
        model->setHeaderData(i, Qt::Horizontal, strHeaderLst[i]);
    }

    ui->cmbFind->insertItems(0, strHeaderLst);
    ui->cmbFind->removeItem(6); //remove pages from search

    int currentYear = QDate::currentDate().year();
    this->ui->spnYear->setMaximum(currentYear);
    this->ui->spnYear->setMinimum(2000);
    this->ui->spnYear->setValue(2015);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnAdd_clicked()
{
    Journal j(this->ui->txtAuthor->text(),
              this->ui->spnYear->value(),
              this->ui->txtTitle->text(),
              this->ui->txtJournal->text(),
              this->ui->spnVolume->value(),
              this->ui->spnIssue->value(),
              this->ui->spnPages->value());


    QList<QStandardItem*> lst = j.getQListQStandardItem();
    model->insertRow(0, lst);
}

void MainWindow::on_btnRemove_clicked()
{
    //QModelIndex qCurrentIndex = ui->tableView->currentIndex();

    QItemSelectionModel *qSelectModel = ui->tableView->selectionModel();
    QModelIndexList qIndexLst = qSelectModel->selectedRows();
    qDebug() << qSelectModel->selectedRows();
    for(int i = 0; i < qIndexLst.count(); i++){
        qDebug() << qIndexLst[i].row();
        model->removeRow(qIndexLst[i].row());
    }
    //model->removeRow(0);
}

void MainWindow::on_btnFind_clicked()
{
    //modelProxy->setFilterRegExp();
    modelProxy->setFilterWildcard(ui->txtFind->text());
    //modelProxy->setFilterFixedString(ui->txtFind->text());
    modelProxy->setFilterKeyColumn(ui->cmbFind->currentIndex());
}

void MainWindow::on_btnReset_clicked()
{
    modelProxy->setFilterFixedString("");
    modelProxy->setFilterKeyColumn(0);
}
