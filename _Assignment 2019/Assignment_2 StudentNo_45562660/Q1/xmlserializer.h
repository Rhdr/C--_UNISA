#ifndef XMLHANDLER_H
#define XMLHANDLER_H

#include <QDebug>
#include <QObject>
#include <QFile>
#include <QXmlSimpleReader>
#include "contactlist.h"
#include "qobjectwriter.h"
#include "xmlcontacthandler.h"

class XmlSerializer : public QObject
{
    Q_OBJECT

public:
    //save contactlst to file using ezust dataobject's QObjectWriter
    static bool writeToXmlFile(ContactList *contactLst, QString path);
    //read from xml file & return a contactList
    static ContactList *readFromXmlFile(QString path);
    //test is xml file exist
    static bool fileExist(QString path);
};

#endif // XMLHANDLER_H
