#ifndef READER_H
#define READER_H

#include <QString>
#include <QFile>
#include <QTextStream>

class Reader
{
public:
    Reader(QString pathP);
    QString readFile();

private:
    QString path;
};

#endif // READER_H
