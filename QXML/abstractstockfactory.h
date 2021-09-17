#ifndef ABSTRACTSTOCKFACTORY_H
#define ABSTRACTSTOCKFACTORY_H

#include <QObject>
#include "stock.h"

class AbstractStockFactory : public QObject
{
    Q_OBJECT
public:
    AbstractStockFactory();
    virtual Stock* createStock(QString objType, QString itemP, int quantityP, QString x) = 0;
signals:

public slots:

};

#endif // ABSTRACTSTOCKFACTORY_H
