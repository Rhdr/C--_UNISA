#include "xmlstreamreader.h"

XmlStreamReader::XmlStreamReader(QString pathP) :
    path(pathP)
{
}

StockList *XmlStreamReader::read()
{
    QFile file(path);
    if(file.open(QIODevice::ReadOnly | QIODevice::Text)){

        QTextStream streamText(&file);
        QString xmlStr;
        xmlStr = streamText.readAll();

        QXmlStreamReader stream(xmlStr);
        QString attribute;
        QString item, quantity, weight, frequency;
        StockList* stockLst = StockList::getInstance();

        while (!stream.atEnd()){
            stream.readNextStartElement();
            if(stream.name().toString() == "StockItem"){
                QXmlStreamAttributes attributes = stream.attributes();
                attribute = attributes.value("type").toString();
                if(attribute == "Confectionery"){
                    stream.readNextStartElement();   //Item
                    item = stream.text().toString();
                    stream.readNextStartElement();   //Quantity
                    quantity = stream.text().toString();
                    stream.readNextStartElement();   //Weight
                    weight = stream.text().toString();
                    Confectionery c(item, quantity.toInt(), weight.toInt());
                    stockLst->addStock(&c);

                } else {    //readingMaterial
                    stream.readNextStartElement();   //Item
                    item = stream.text().toString();
                    stream.readNextStartElement();   //Quantity
                    quantity = stream.text().toString();
                    stream.readNextStartElement();   //frequency
                    frequency = stream.text().toString();
                    ReadingMaterial r(item, quantity.toInt(), frequency);
                    stockLst->addStock(&r);
                }
            }
        }
        file.close();
        return stockLst;
    } else {
        throw("Can't open file");
    }
}
