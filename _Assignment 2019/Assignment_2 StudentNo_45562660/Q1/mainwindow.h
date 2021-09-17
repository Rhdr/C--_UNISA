#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>
#include <QStandardItem>
#include <QSortFilterProxyModel>
#include <QStringList>
#include <QDebug>
#include <QMessageBox>
#include "contactlist.h"
#include "xmlserializer.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    //add ui items to model & contactList
    void on_btnAdd_clicked();
    //delete ui items from model & contactList
    void on_btnDelete_clicked();
    //filter model on category indexChange & disable delete btn
    void on_cmbSelectCategory_currentIndexChanged(int index);
    //update combobox categories
    void on_newCategoryAdded(int category);
    //load contacts to model
    void loadData(Contact *c);
    //remove particular combobox category
    void on_deletedCategory(int category);
    //clear current filters and show all data
    void on_btnShowAll_clicked();
    //attempt to enable the delete btn
    void attemptToEnable_DeleteBtn();

private:
    //hide table view columns for each type of list to be displayed
    void hideTableColumns();

    //save on closeEvent
    void closeEvent(QCloseEvent *);

    Ui::MainWindow *ui;
    QStandardItemModel *modelContacts;   //shared model used for tables
    QSortFilterProxyModel *modelProxyContacts;  //shared model used for tables
    QStandardItemModel *modelCategory;   //used for combobox
    ContactList *contactLst;
    bool isFiltered;

};

#endif // MAINWINDOW_H
