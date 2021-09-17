#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QList>
#include <QDebug>
#include <QButtonGroup>
#include <QCloseEvent>
#include <QMessageBox>
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
    void on_btnDelete_clicked();
    void on_listWidget_itemSelectionChanged();
    void on_txtName_textChanged(const QString &arg1);
    void closeEvent(QCloseEvent *event);

private:
    void activateAddBtn();
    Ui::MainWindow *ui;
    QButtonGroup *radioBtnGroup;
    QList<Company*> companyLst;
};

#endif // MAINWINDOW_H
