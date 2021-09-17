#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QThread>
#include "investmentcalculator.h"

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
    void on_btnCalculate_clicked();
    void handleYearlyInvestAmounts(int year, double amount);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
