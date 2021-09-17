#ifndef XMLCONTACTHANDLER_H
#define XMLCONTACTHANDLER_H

#include "contactlist.h"
#include <QXmlDefaultHandler>
#include <QDebug>
#include <QString>

class XmlContactHandler : public QXmlDefaultHandler {
  public:
    XmlContactHandler();
    //load temp variables from xml attribues
    bool startElement(const QString & namespaceURI,
                      const QString & localName,
                      const QString & qName,
                      const QXmlAttributes & atts);
    //test if xml class is loaded, if so create contact and add to contactLst
    bool endElement(const QString & namespaceURI,
                    const QString & localName,
                    const QString & qName );
    //return contact list
    ContactList *getContactLst();

  private:
    //clear temp private variables
    void clearTempVars();

    ContactList *cLst;

    int tempPk;
    int tempCategory;
    QString tempFirstName;
    QString tempLastName;
    QString tempStreetAddress;
    QString tempZipCode;
    QString tempCity;
    QString tempPhoneNumber;
    int tempEndElementCounter;
};

#endif // XMLCONTACTHANDLER_H
