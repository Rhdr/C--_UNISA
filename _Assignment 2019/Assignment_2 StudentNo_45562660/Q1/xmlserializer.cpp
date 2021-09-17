#include "xmlserializer.h"

//save contactlst to file using ezust dataobject's QObjectWriter
bool XmlSerializer::writeToXmlFile(ContactList *contactLst, QString path)
{
    QFile data(path);
    if (data.open(QFile::WriteOnly | QFile::Truncate)) {
        QTextStream out(&data);

        QObjectWriter writer = QObjectWriter();
        out << writer.toString(contactLst);
        out.flush();
        //qDebug() << writer.toString(contactLst);
        data.close();
        return true;
    } else {
        return false;
    }
}

//read from xml file & return a contactList
ContactList *XmlSerializer::readFromXmlFile(QString path)
{

    //Contact c(a,b,c ...);
    QFile xmlFile(path);
    if (xmlFile.open(QFile::ReadOnly)) {
        XmlContactHandler handler;
        QXmlSimpleReader reader;
        reader.setContentHandler(&handler);
        QXmlInputSource source(&xmlFile);
        reader.parse(source);

        xmlFile.close();
        return handler.getContactLst();
    }

    return new ContactList();
}

//test is xml file exist
bool XmlSerializer::fileExist(QString path)
{
    //check if there is a saved file
    QFile data(path);
    return data.exists();
}
