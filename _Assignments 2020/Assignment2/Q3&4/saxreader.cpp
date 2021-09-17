#include "saxreader.h"

SaxReader::SaxReader(QString pathP) :
    path(pathP)
{
    //
}

QString SaxReader::read()
{
    QFile file(path);
    //if(file.open(QIODevice::ReadOnly | QIODevice::Text)){
    QXmlSimpleReader reader;
    QXmlInputSource fileSource(&file);
    SaxHandler handler;
    reader.setContentHandler(&handler);
    reader.setErrorHandler(&handler);
    reader.parse(fileSource);
    file.close();

    return QString("");
    //} else {
    //    throw("Can't open file");
    //}
}
