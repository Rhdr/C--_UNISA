#ifndef STOCKLIST_H
#define STOCKLIST_H
#include <QMetaObject>
#include <QDebug>
#include "stock.h"

//singelton
class StockList
{
public:
    static StockList* getInstance();
    void addStock(Stock* stock);
    QList<Stock *> *returnList(QString lst);

private:
    StockList();
    static StockList* instance;
    QList<Stock*> confectioneryLst;
    QList<Stock*> readingMaterialLst;
};

#endif // STOCKLIST_H
