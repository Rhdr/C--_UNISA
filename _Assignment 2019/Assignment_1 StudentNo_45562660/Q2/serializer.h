#ifndef SERIALIZER_H
#define SERIALIZER_H

#include <QObject>
#include <QString>
#include <QTextStream>
#include <QFile>
#include <QDir>
#include <QDebug>
#include <QMetaObject>
#include <QMetaProperty>
#include "company.h"
#include "companyprofit.h"
#include "companynonprofit.h"

class Serializer : public QObject
{
    Q_OBJECT
public:
    static bool writeToFile(QList<Company *> lst, QString path);
    static QList<Company *> readFromFile(QString path);
    static bool saveExist(QString path);

signals:

public slots:

};

#endif // SERIALIZER_H
