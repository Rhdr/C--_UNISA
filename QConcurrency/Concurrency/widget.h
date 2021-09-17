#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QThread>
#include "worker.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void displayNumberList1(int number);
    void displayNumberList2(int number);
    void displayNumberList3(int number);

    void on_btnStart_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
