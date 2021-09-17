#ifndef CUSTOMDELEGATE_H
#define CUSTOMDELEGATE_H

#include <QObject>
#include <QStyledItemDelegate>
#include <QMap>

class CustomDelegate : public QStyledItemDelegate
{
public:
    CustomDelegate(const QMap<int, QWidget *> &pWidgetMap);
    virtual QWidget *createEditor(QWidget * parent, const QStyleOptionViewItem & option, const QModelIndex & index) const;
    //virtual void setEditorData(QWidget * editor, const QModelIndex & index) const;
    //virtual void setModelData(QWidget * editor, QAbstractItemModel * model, const QModelIndex & index) const;
    void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const;
    //void updateEditorGeometry(QWidget * editor, const QStyleOptionViewItem & option, const QModelIndex & index) const;
    void setQLineEdit(int column, QRegularExpressionValidator rx);
private:
    QMap<int, QWidget*> widgetMap;
};

#endif // CUSTOMDELEGATE_H
