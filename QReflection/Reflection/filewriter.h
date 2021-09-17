#ifndef FILEWRITER_H
#define FILEWRITER_H

#include <QObject>
#include <QList>
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QMetaObject>
#include <QMetaProperty>

class FileWriter
{
public:
    FileWriter(QObjectList* olist, QString fname);
    int write();

private:
    QObjectList* list;
    QString fileName;
};

#endif // FILEWRITER_H
