#include "mainwindow.h"
#include "ui_mainwindow.h"
const int STATUSBAR_DISPLAY_TIME = 3000;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    //setup ui, model & connections
    ui->setupUi(this);
    model = new QStringListModel(this);
    ui->listView->setModel(model);

    QObject::connect(ui->listView->selectionModel(), SIGNAL(currentChanged(QModelIndex,QModelIndex)),
                     this, SLOT(currentRowChanged(QModelIndex,QModelIndex)));
    QObject::connect(model, SIGNAL(dataChanged(QModelIndex,QModelIndex,QVector<int>)),
                     this, SLOT(modelDataChanged(QModelIndex,QModelIndex,QVector<int>)));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnAdd_clicked()
{
    //Add item to list/model & check for duplicates
    QString title = ui->txtTitle->text();
    if (!lst.contains(title)){
        lst.append(title);
        lst.sort();
        model->setStringList(lst);
        ui->statusBar->showMessage(QString("New record inserted: %1").arg(title), STATUSBAR_DISPLAY_TIME);
    } else {
        QMessageBox::warning(this, "Insert Error",
                             QString("Sorry, the item %1 is already in the list.\nNothing was added to the list")
                             .arg(title));
        ui->statusBar->showMessage("No record was inserted", STATUSBAR_DISPLAY_TIME);
    }
    ui->txtTitle->clear();
    ui->txtTitle->setFocus();
}

void MainWindow::on_btnDelete_clicked()
{
    //delete item
    QItemSelectionModel *selectionModel = ui->listView->selectionModel();
    if (selectionModel->hasSelection()){
        int msgRetVal = QMessageBox::question(this, "Delete Record",
                                                      "Are you sure you wish to delete the selected record/s?",
                                                      QMessageBox::Yes | QMessageBox::Cancel);
        if (msgRetVal == QMessageBox::Yes){
            QModelIndexList rowLst = selectionModel->selectedRows();
            int startPos = rowLst[0].row();
            model->removeRows(startPos, rowLst.length());
            lst.removeAt(startPos);
            ui->statusBar->showMessage(QString("Record deleted"), STATUSBAR_DISPLAY_TIME);
        }
    }
}

void MainWindow::currentRowChanged(QModelIndex current, QModelIndex prev)
{
    (void)prev;
    //enable/disable delete btn
    if (current.isValid()){
        ui->btnDelete->setEnabled(true);
    } else {
        ui->btnDelete->setEnabled(false);
    }
}

void MainWindow::modelDataChanged(QModelIndex topLeft, QModelIndex botomRight, const QVector<int> &role)
{
    //sort data on data change
    (void)botomRight;
    QString value = model->data(topLeft, role[0]).toString();
    lst[topLeft.row()] = value;
    lst.sort();
    model->setStringList(lst);
}
