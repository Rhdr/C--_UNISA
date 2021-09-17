#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QList>
#include <QDebug>
#include <QButtonGroup>
#include <QCloseEvent>
#include <QMetaObject>
#include <QMetaProperty>
#include <QMessageBox>
#include <QListWidget>
#include "companylst.h"
#include "company.h"
#include "companynonprofit.h"
#include "companyprofit.h"
#include "serializer.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(bool showAppBeforeLoadMsgBox, QWidget *parent = 0);
    ~MainWindow();

public slots:

private slots:
    void radioBtnGroup_buttonClicked(int id);
    void on_radProfit_clicked();
    void on_radNotProfit_clicked();
    void on_btnAdd_clicked();
    void on_btnDeleteProfit_clicked();
    void on_btnDeleteNonProfit_clicked();
    void deleteCompany(bool isNPO, QListWidget *listWidget);
    void on_listWidgetProfit_itemSelectionChanged();
    void on_listWidgetNonProfit_itemSelectionChanged();
    void enableDeleteBtn(QListWidget *listWidget, QPushButton *button);
    void on_txtName_textChanged(const QString &arg1);
    void closeEvent(QCloseEvent *event);

private:
    void activateAddBtn();
    Ui::MainWindow *ui;
    QButtonGroup *radioBtnGroup;
    CompanyLst companyLst;
};

#endif // MAINWINDOW_H
