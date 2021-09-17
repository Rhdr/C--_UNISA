#include <QCoreApplication>
#include <QDebug>
#include "abstractstockfactory.h"
#include "stockfactory.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
/*
    Confectionery c1("Candy", 33, 10);
    Confectionery c2("Sweetroll", 24, 44);
    Confectionery c3("Choclate", 13, 12);

    ReadingMaterial r1("Starwars", 12, "High");
    ReadingMaterial r2("Startrek", 16, "Med");
    ReadingMaterial r3("Starbugs", 9, "Low");
*/
    AbstractStockFactory* factory = new StockFactory;
    Stock* c1 = factory->createStock("Confectionery", "Kit Kat", 12, "65");
    qDebug() << c1->toString();
    Stock* rm1 = factory->createStock("ReadingMaterial", "The Star", 100, "Daily");
    qDebug() << rm1->toString();

    return a.exec();
}
