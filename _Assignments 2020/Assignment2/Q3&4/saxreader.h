#ifndef SAXREADER_H
#define SAXREADER_H

#include <QString>
#include <QXmlSimpleReader>
#include <QXmlInputSource>
#include "saxhandler.h"

class SaxReader
{
public:
    SaxReader(QString pathP);
    QString read();

private:
    QString path;
};

#endif // SAXREADER_H
