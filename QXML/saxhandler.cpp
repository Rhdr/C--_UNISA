#include "saxhandler.h"

SaxHandler::~SaxHandler()
{}

bool SaxHandler::startDocument()
{
    return true;
}

bool SaxHandler::startElement(const QString &namespaceURI, const QString &localName, const QString &qName, const QXmlAttributes &atts)
{
    Q_UNUSED(namespaceURI);
    Q_UNUSED(localName);
    if(qName != "stockList")
        tempLst.append(qName);
    if (atts.count()>0)
        tempLst.append(atts.value(0));
    return true;
}

bool SaxHandler::characters(const QString &ch)
{
    if(!ch.isEmpty()){
        tempLst.append(ch);
    }
    return true;
}

bool SaxHandler::endElement(const QString &namespaceURI, const QString &localName, const QString &qName)
{
    Q_UNUSED(namespaceURI);
    Q_UNUSED(localName);

    if(qName == "stockItem"){
        qDebug() << "tempLst:" << tempLst.at(2) << tempLst.at(5) << tempLst.at(8) << tempLst.at(11);
        Stock *s = stockFactory.createStock(tempLst.at(2),              //QString objType
                                            tempLst.at(5),              //QString itemP
                                            tempLst.at(8).toInt(),      //int quantityP
                                            tempLst.at(11));            //QString x

        qDebug() << s->toString();

        StockList *stockList = StockList::getInstance();
        stockList->addStock(s);
        tempLst.clear();
    }
    return true;
}

bool SaxHandler::endDocument()
{
    return true;
}
