#include "reader.h"

Reader::Reader(QString pathP) :
    path(pathP)
{
    //
}

QString Reader::readFile()
{
    QFile file(path);
    if(file.open(QIODevice::ReadOnly | QIODevice::Text)){
        QTextStream in(&file);
        QString retval = QString(in.readAll());
        file.close();
        return retval;
    } else {
        return QString("");
    }
}
