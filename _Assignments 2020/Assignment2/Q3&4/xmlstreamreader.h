#ifndef XMLSTREAMREADER_H
#define XMLSTREAMREADER_H

#include <QXmlStreamReader>
#include <QTextStream>
#include <QString>
#include <QFile>
#include <QDebug>
#include "stocklist.h"
#include "confectionery.h"
#include "readingmaterial.h"

class XmlStreamReader
{
public:
    XmlStreamReader(QString pathP);
    StockList* read();

private:
    QString path;
};

#endif // XMLSTREAMREADER_H
