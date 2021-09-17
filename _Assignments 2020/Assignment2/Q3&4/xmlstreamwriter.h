#ifndef XMLSTREAMWRITER_H
#define XMLSTREAMWRITER_H

#include <QXmlStreamWriter>
#include <QString>
#include <QFile>
#include <QTextStream>
#include "stocklist.h"
#include "confectionery.h"
#include "readingmaterial.h"

class XMLStreamWriter
{
public:
    XMLStreamWriter(QString pathP);
    void write(StockList* stockLst);

private:
    QString path;
};

#endif // XMLSTREAMWRITER_H
