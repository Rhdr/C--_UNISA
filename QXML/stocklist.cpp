#include "stocklist.h"

StockList* StockList::instance = 0;

StockList::StockList()
{
}

StockList* StockList::getInstance(){
    if(StockList::instance == 0){
        return StockList::instance = new StockList();
    } else {
        return StockList::instance;
    }
}

void StockList::addStock(Stock *stock)
{
    const QMetaObject* qmeta = stock->metaObject();
    QString className = QString(qmeta->className());
    if (className == "Confectionery"){
        confectioneryLst.append(stock);
    } else if(className == "ReadingMaterial"){
        readingMaterialLst.append(stock);
    } else {
        throw("Class not supported");
    }
}

QList<Stock *>* StockList::returnList(QString lst)
{
    if (lst == "Confectionery"){
        return &confectioneryLst;
    } else if(lst == "ReadingMaterial"){
        return &readingMaterialLst;
    } else {
        throw("List not supported");
    }

}

void StockList::clear()
{
    confectioneryLst.clear();
    readingMaterialLst.clear();
}
