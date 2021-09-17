#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnCalculate_clicked()
{
    QThread *thread1 = new QThread();
    investmentCalculator *workerInvestCalc = new investmentCalculator(ui->dspnAmount->value(),
                                                                     ui->dspnRate->value(),
                                                                     ui->spnYears->value());
    workerInvestCalc->moveToThread(thread1);

    QObject::connect(thread1, SIGNAL(started()),
                     workerInvestCalc, SLOT(startWorker()));
    QObject::connect(workerInvestCalc, SIGNAL(newInvestmentAmount(int,double)),
                     this, SLOT(handleYearlyInvestAmounts(int,double)));

    //cleanup
    QObject::connect(workerInvestCalc, SIGNAL(finished()),
                     thread1, SLOT(quit()));
    QObject::connect(workerInvestCalc, SIGNAL(finished()),
                     workerInvestCalc, SLOT(deleteLater()));
    QObject::connect(thread1, SIGNAL(finished()),
                     thread1, SLOT(deleteLater()));

    thread1->start();
}

void MainWindow::handleYearlyInvestAmounts(int year, double amount)
{
    if (year == 1){
        ui->textEdit->clear();
    }
    QTextCursor cursor = QTextCursor(ui->textEdit->document());
    cursor.movePosition(QTextCursor::End);
    cursor.insertText(QString("Year: %1 - Amount: R %2\n").arg(year).arg(amount));
}
