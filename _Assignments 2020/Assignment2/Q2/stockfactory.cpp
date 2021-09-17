#include "stockfactory.h"
StockFactory::StockFactory()
{
}

Stock *StockFactory::createStock(QString objType, QString itemP, int quantityP, QString x)
{
    if(objType == "Confectionery"){
        return new Confectionery(itemP, quantityP, x.toInt());
    }
    else if(objType == "ReadingMaterial"){
        return new ReadingMaterial(itemP, quantityP, x);
    }
    else {
        throw("Error no such stocktype");
    }
}
