#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>

#include "factoryiofield.h"
#include "factoryoperations.h"
#include "iofield.h"
#include "operations.h"


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
    void on_radTypeInt_clicked();

    void on_radTypeStr_clicked();

    void on_radTypeLst_clicked();

    void on_radOprAdd_clicked();

    void on_radOprSub_clicked();

    void on_btnCalculate_clicked();

    void on_btnClear_clicked();

private:
    //creates the ui accoutding to user radio btn selection
    void setupUi(QString type);
    //delete pointers created by uiSetup
    void deleteSetupUiItems();
    //creates an operation
    void setupOperation();
    //delete the operation if exist
    void deleteOperation();


    QString type;
    FactoryIOField *factoryIOField;
    IOField *x;
    IOField *y;
    IOField *result;
    QWidget *widgetX;
    QWidget *widgetY;
    QWidget *widgetResult;
    FactoryOperations *factoryOperations;
    Operations *operation;

    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
