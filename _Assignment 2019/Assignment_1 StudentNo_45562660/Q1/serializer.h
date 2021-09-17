#ifndef SERIALIZER_H
#define SERIALIZER_H

#include <QString>
#include <QTextStream>
#include <QFile>
#include <QDebug>
#include "company.h"
#include "companyprofit.h"
#include "companynonprofit.h"

class Serializer
{
public:
    static bool writeToFile(QList<Company *> lst, QString path);
    static QList<Company *> readFromFile(QString path);
    static bool saveExist(QString path);

};

#endif // SERIALIZER_H
