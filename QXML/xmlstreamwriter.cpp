#include "xmlstreamwriter.h"

XMLStreamWriter::XMLStreamWriter(QString pathP) :
    path(pathP)
{
    //
}

void XMLStreamWriter::write(StockList *stockLst)
{
    QString xmlStr;
    QXmlStreamWriter stream(&xmlStr);
    stream.setAutoFormatting(true);

    stream.writeStartDocument();
        stream.writeStartElement("stockList");
            QList<Stock*>* confectioneryLst = stockLst->returnList("Confectionery");
            for(int i = 0; i < confectioneryLst->length(); i++){
                Confectionery* confectioneryItem = qobject_cast<Confectionery*>(confectioneryLst->at(i));
                stream.writeStartElement("stockItem");
                    stream.writeAttribute("type", "Confectionery");
                    stream.writeTextElement("Item", confectioneryItem->getItem());
                    stream.writeTextElement("Quantity", QString::number(confectioneryItem->getQuantity()));
                    stream.writeTextElement("Weight", QString::number(confectioneryItem->getWeight()));
                stream.writeEndElement();   //"stockItem
            }
            QList<Stock*>* readingMLst = stockLst->returnList("ReadingMaterial");
            for(int i = 0; i < readingMLst->length(); i++){
                ReadingMaterial* readingMItem = qobject_cast<ReadingMaterial*>(readingMLst->at(i));
                stream.writeStartElement("stockItem");
                    stream.writeAttribute("type", "ReadingMaterial");
                    stream.writeTextElement("Item", readingMItem->getItem());
                    stream.writeTextElement("Quantity", QString::number(readingMItem->getQuantity()));
                    stream.writeTextElement("Frequency", readingMItem->getFrequency());
                stream.writeEndElement();   //"stockItem
            }
        stream.writeEndElement();   //"stockList"
    stream.writeEndDocument();

    QFile file(path);
    if(file.open(QIODevice::WriteOnly | QIODevice::Text)){
        QTextStream out(&file);
        out << xmlStr;
        file.close();
    } else {
        throw("Can't open file");
    }
}

/*
<stockList>
    <stockItem type="Confectionery">
        <item>Kit Kat</item>
        <quantity>12</quantity>
        <weight>65</weight>
    </stockItem>
        <stockItem type="ReadingMaterial">
        <item>The Star</item>
        <quantity>100</quantity>
        <frequency>Daily</frequency>
    </stockItem>
</stockList
*/
