#include "delegate.h"

Delegate::Delegate()
{
}

void Delegate::paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    int year = index.sibling(index.row(), 1).data().toInt();
    int currentYear = QDate::currentDate().year();
    QColor color;
    if(year < (currentYear - 10)){
        color = Qt::red;
    } else if(year < (currentYear - 5)){
        color = Qt::yellow;
    } else {
        color = Qt::white;
    }

    painter->fillRect(option.rect, color);
    painter->drawText(option.rect, index.data().toString());
}
