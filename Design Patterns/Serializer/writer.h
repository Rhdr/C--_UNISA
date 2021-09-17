#ifndef WRITER_H
#define WRITER_H

#include <QString>
#include <QFile>
#include <QTextStream>

class Writer
{
public:
    Writer(QString pathP);
    void WriteToFile(QString str);

private:
    QString path;
};

#endif // WRITER_H
