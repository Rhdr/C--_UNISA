#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QStandardItemModel>
#include <QSortFilterProxyModel>
#include <QString>
#include <QDebug>
#include <QDate>
#include <QRegularExpression>
#include <QRegularExpressionValidator>
#include "delegate.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    void appendRow(QString author,
                   QString year,
                   QString title,
                   QString journal,
                   QString volume,
                   QString issue,
                   QString pages);

private slots:
    void on_btnAdd_clicked();

    void on_btnRemove_clicked();

    void on_btnFind_clicked();

    void on_btnReset_clicked();

    void on_itemChanged(QStandardItem* item);

private:
    Ui::Widget *ui;
    QStandardItemModel* model;
    QSortFilterProxyModel* modelProxy;
    Delegate* delegate;
};

#endif // WIDGET_H
