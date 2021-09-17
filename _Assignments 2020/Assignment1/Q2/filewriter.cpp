#include "filewriter.h"
#include <QFile>
#include <QIODevice>
#include <QTextStream>
#include <QMetaObject>
#include <QMetaProperty>
#include <QVariant>
#include <QString>

FileWriter::FileWriter(QObject *parent) :
    QObject(parent)
{
}

int FileWriter::writeObject(QList<QObject *> objLst)
{
    QFile file("bla.txt");
    if(!file.open(QIODevice::WriteOnly)){
        return 0;
    }

    QTextStream out(&file);
    int i = 0;
    for(i; i < objLst.count(); i++)
    {
        const QMetaObject *metaObj = objLst[i]->metaObject();
        for(int j = 0; j < metaObj->propertyCount(); j++){
            QMetaProperty metaProperty = metaObj->property(j);
            const char* propertyName = metaProperty.name();
            QString strProperty = objLst[i]->property(propertyName).toString();
            out << strProperty << "; ";
        }
        out << endl;
    }
    return i;

}
