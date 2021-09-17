#include "customdelegate.h"
#include <QDebug>
#include <QPainter>
#include <QDate>
#include <QSpinBox>
#include <QLineEdit>

CustomDelegate::CustomDelegate(const QMap<int, QWidget *> &pWidgetMap)
{
    //some dict (column, validation)
    widgetMap = pWidgetMap;

}

QWidget *CustomDelegate::createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    if(widgetMap.contains(index.column())){
        QWidget *widget = widgetMap.value(index.column());
        QLineEdit *lineEdit = qobject_cast<QLineEdit*>(widget);
        if(lineEdit)
        {
            qDebug()<<"right type";
            lineEdit->setParent(parent);
            return lineEdit;
        } else {
            qDebug()<<"wrong type";
            return QStyledItemDelegate::createEditor(parent, option, index);
        }
    } else {
        return QStyledItemDelegate::createEditor(parent, option, index);
    }

}

/*
void CustomDelegate::setEditorData(QWidget *editor, const QModelIndex &index) const
{

}

void CustomDelegate::setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const
{

}
*/

void CustomDelegate::paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    int currentYear = QDate::currentDate().year();
    int year = index.sibling(index.row(), 1).data().toInt();
    int yearDiff = year - currentYear;
    if(yearDiff <= -10){
        painter->fillRect(option.rect, Qt::red);
    } else if(yearDiff <= -5) {
        painter->fillRect(option.rect, Qt::green);
    }
    QStyledItemDelegate::paint(painter, option, index);
}

void CustomDelegate::setQLineEdit(int column, QRegularExpressionValidator rx)
{

}


    /*void CustomDelegate::updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    editor->setGeometry(option.rect);
    //QStyledItemDelegate::updateEditorGeometry(editor, option, index);
}
*/
