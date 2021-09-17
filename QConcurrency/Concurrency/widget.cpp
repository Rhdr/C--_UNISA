#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::displayNumberList2(int number)
{
    ui->listWidget_2->addItem(QString::number(number));
}

void Widget::displayNumberList3(int number)
{
    ui->listWidget_3->addItem(QString::number(number));
}

void Widget::displayNumberList1(int number)
{
    ui->listWidget->addItem(QString::number(number));
}

void Widget::on_btnStart_clicked()
{
    Worker *worker1 = new Worker(10);
    Worker *worker2 = new Worker(10);
    Worker *worker3 = new Worker(10);
    QThread *thread1 = new QThread();
    QThread *thread2 = new QThread();
    QThread *thread3 = new QThread();
    worker1->moveToThread(thread1);
    worker2->moveToThread(thread2);
    worker3->moveToThread(thread3);

    QObject::connect(thread1, SIGNAL(started()), worker1, SLOT(startProducingNumbers()));
    QObject::connect(thread2, SIGNAL(started()), worker2, SLOT(startProducingNumbers()));
    QObject::connect(thread3, SIGNAL(started()), worker3, SLOT(startProducingNumbers()));

    QObject::connect(worker1, SIGNAL(nextRandomNumber(int)), this, SLOT(displayNumberList1(int)));
    QObject::connect(worker2, SIGNAL(nextRandomNumber(int)), this, SLOT(displayNumberList2(int)));
    QObject::connect(worker3, SIGNAL(nextRandomNumber(int)), this, SLOT(displayNumberList3(int)));

    QObject::connect(worker1, SIGNAL(finished()), thread1, SLOT(quit()));
    QObject::connect(worker2, SIGNAL(finished()), thread2, SLOT(quit()));
    QObject::connect(worker3, SIGNAL(finished()), thread3, SLOT(quit()));

    thread1->start();
    QThread::msleep(2000);
    thread2->start();
    QThread::msleep(2000);
    thread3->start();

}
