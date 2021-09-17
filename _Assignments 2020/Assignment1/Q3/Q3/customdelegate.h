#ifndef CUSTOMDELEGATE_H
#define CUSTOMDELEGATE_H

#include <QObject>
#include <QStyledItemDelegate>

class CustomDelegate : public QStyledItemDelegate
{
public:
    CustomDelegate();
    void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const;
};

#endif // CUSTOMDELEGATE_H
