#ifndef SAXHANDLER_H
#define SAXHANDLER_H

#include <QXmlDefaultHandler>
#include <QDebug>
#include "stockfactory.h"
#include "stocklist.h"

class SaxHandler : public QXmlDefaultHandler
{
public:
    //SaxHandler();
    ~SaxHandler();
    bool startDocument();
    bool startElement(const QString &namespaceURI, const QString &localName, const QString &qName, const QXmlAttributes &atts);
    bool characters(const QString &ch);
    bool endElement(const QString &namespaceURI, const QString &localName, const QString &qName);
    bool endDocument();

private:
    QStringList tempLst;
    StockFactory stockFactory;
};

#endif // SAXHANDLER_H
