#include "writer.h"

Writer::Writer(QString pathP) :
    path(pathP)
{
    //
}


void Writer::WriteToFile(QString str)
{
    QFile file(path);
    if(file.open(QIODevice::WriteOnly | QIODevice::Text)){
        QTextStream out(&file);
        out << str;
        file.close();
    }
}


