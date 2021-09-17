#include <QCoreApplication>
#include <QDebug>
#include "abstractstockfactory.h"
#include "stockfactory.h"
#include "stockList.h"
#include "xmlstreamwriter.h"
#include "xmlstreamreader.h"
#include "saxreader.h"

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
    Stock* c1 = factory->createStock("Confectionery", "Candy", 33, "10");
    Stock* c2 = factory->createStock("Confectionery", "Sweetroll", 24, "44");
    Stock* c3 = factory->createStock("Confectionery", "Choclate", 13, "12");
    Stock* rm1 = factory->createStock("ReadingMaterial", "The Star", 12, "High");
    Stock* rm2 = factory->createStock("ReadingMaterial", "Startrek", 16, "Med");
    Stock* rm3 = factory->createStock("ReadingMaterial", "Starbugs", 9, "Low");

    StockList* stockList = StockList::getInstance();
    stockList->addStock(c1);
    stockList->addStock(c2);
    stockList->addStock(c3);
    stockList->addStock(rm1);
    stockList->addStock(rm2);
    stockList->addStock(rm3);

    QList<Stock*>* cList = stockList->returnList("Confectionery");
    for (int i=0; i<cList->size(); i++)
    qDebug() << cList->at(i)->toString() << endl;
    qDebug() << "";

    QString xmlPathStr("stockList.xml");

    XMLStreamWriter xmlWriter(xmlPathStr);
    xmlWriter.write(stockList);


    XmlStreamReader xmlReader(xmlPathStr);
    StockList* readStockList = xmlReader.read();

    QList<Stock*>* cXmlList = readStockList->returnList("Confectionery");
    for (int i=0; i<cXmlList->size(); i++)
        qDebug() << "XML Reader:" << cXmlList->at(i)->toString() << endl;
    qDebug() << "";

    stockList->clear();

    SaxReader saxReader(xmlPathStr);
    QList<Stock*>* saxLst = stockList->returnList("ReadingMaterial");
    qDebug() << "SAX Reader:" << saxLst;


    return a.exec();
}
