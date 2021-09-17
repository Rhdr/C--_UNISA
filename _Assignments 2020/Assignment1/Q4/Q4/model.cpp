#include "model.h"
#include <QStandardItem>
#include <QDebug>
#include <QDate>

Model::Model(QObject *parent) :
    QStandardItemModel(parent)
{
    for (int row = 0; row < 5; row++){
        for (int column = 0; column < 3; column++){
            QStandardItem *item = new QStandardItem(QString("row %0, column %1").arg(row).arg(column));
            this->setItem(row, column, item);
        }
    }
}

bool Model::setData(const QModelIndex &index, const QVariant &value, int role){
    if(index.column() == 1 && (value.toInt() > QDate::currentDate().year())){
        //qDebug() << "bla";
        return false;
    } else {
        return QStandardItemModel::setData(index, value, role);
    }
}

