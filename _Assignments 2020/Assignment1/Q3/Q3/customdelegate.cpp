#include "customdelegate.h"
#include <QDebug>
#include <QPainter>
#include <QDate>

CustomDelegate::CustomDelegate()
{
}

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
