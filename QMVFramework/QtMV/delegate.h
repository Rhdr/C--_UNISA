#ifndef DELEGATE_H
#define DELEGATE_H

#include <QStyledItemDelegate>
#include <QDate>
#include <QPainter>
#include <QColor>

class Delegate : public QStyledItemDelegate
{
    Q_OBJECT
public:
    Delegate();
    void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const;
};

#endif // DELEGATE_H
