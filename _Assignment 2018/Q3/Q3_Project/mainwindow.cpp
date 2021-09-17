#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QStandardItem>
#include <QList>
#include <QString>
#include <QModelIndex>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    model = new QStandardItemModel;
    QList<QStandardItem*> lst;
    lst.append(new QStandardItem("Abba"));
    lst.append(new QStandardItem("Ess"));
    lst.append(new QStandardItem("234.93"));
    lst.append(new QStandardItem(34));
    model->appendRow(lst);
    model->setHorizontalHeaderItem(0, new QStandardItem("Composer"));
    model->setHorizontalHeaderItem(1, new QStandardItem("Album Tile"));
    model->setHorizontalHeaderItem(2, new QStandardItem("Replacement Cost"));
    model->setHorizontalHeaderItem(3, new QStandardItem("Rating"));

    ui->setupUi(this);
    ui->tableView->setModel(model);
}

MainWindow::~MainWindow()
{
    delete model;
    delete ui;
}

void MainWindow::on_btnAdd_clicked()
{
    QList<QStandardItem*> lst;
    lst.append(new QStandardItem(ui->txtComposer->text()));
    lst.append(new QStandardItem(ui->txtTitle->text()));
    lst.append(new QStandardItem(ui->dspnReplaceCost->value()));
    lst.append(new QStandardItem(ui->spnRating->value()));
    model->appendRow(lst);
}

void MainWindow::on_btnDel_clicked()
{
    QModelIndex qIndex = ui->tableView->currentIndex();
    model->removeRow(qIndex.row());
}
