#ifndef STOCKFACTORY_H
#define STOCKFACTORY_H
#include "abstractstockfactory.h"
//#include "stock.h"
#include "confectionery.h"
#include "readingmaterial.h"

class StockFactory : public AbstractStockFactory
{
public:
    StockFactory();
    Stock *createStock(QString objType, QString itemP, int quantityP, QString x);
};

#endif // STOCKFACTORY_H
