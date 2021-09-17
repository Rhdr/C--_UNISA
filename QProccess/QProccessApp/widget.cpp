#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    process = new QProcess;

    QObject::connect(process, SIGNAL(readyReadStandardOutput()), this, SLOT(display()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    process->start("randomNumber.exe");
}

void Widget::display()
{
    ui->listWidget->addItem(process->readLine());

}
