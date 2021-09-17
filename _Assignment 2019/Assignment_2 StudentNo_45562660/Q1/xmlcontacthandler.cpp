#include "xmlcontacthandler.h"
#include <QTextStream>
//start
QTextStream cout(stdout);

//set counter to 0
XmlContactHandler::XmlContactHandler()
{
    tempEndElementCounter = 0;
    cLst = new ContactList();
}

//load temp variables from xml attribues
bool XmlContactHandler::startElement(const QString &,
                                     const QString &,
                                     const QString &,
                                     const QXmlAttributes & atts) {

    //set temp contact class values
    if (atts.count() == 3){
        if(atts.value(0) == "pk"){
            tempPk = atts.value(2).toInt();
        } else if(atts.value(0) == "category"){
            tempCategory = atts.value(2).toInt();
        } else if(atts.value(0) == "firstName"){
            tempFirstName = atts.value(2);
        } else if(atts.value(0) == "lastName"){
            tempLastName = atts.value(2);
        } else if(atts.value(0) == "streetAddress"){
            tempStreetAddress = atts.value(2);
        } else if(atts.value(0) == "zipCode"){
            tempZipCode = atts.value(2);
        } else if(atts.value(0) == "city"){
            tempCity = atts.value(2);
        } else if(atts.value(0) == "phoneNumber"){
            tempPhoneNumber = atts.value(2);
        }

        //qDebug() << atts.value(0) << ", " << atts.value(2);
    }

    //qDebug() << "startElement(" << atts.count() << ", " << ", " << atts.value(0) << ")";
    return true;
}

//test if xml class is loaded, if so create contact and add to contactLst
bool XmlContactHandler::endElement(const QString &,
                                   const QString &,
                                   const QString &) {
    tempEndElementCounter++;
    //qDebug() << "endElementCounter: " << endElementCounter;
    //test if at end of xml class then create contact & add to contact list
    if (tempEndElementCounter == 9){
        //qDebug() << "done with class append";
        //qDebug() << "";
        Contact *c = new Contact(tempPk,
                                 tempCategory,
                                 tempFirstName,
                                 tempLastName,
                                 tempStreetAddress,
                                 tempZipCode,
                                 tempCity,
                                 tempPhoneNumber);
        cLst->add(c);

        //qDebug() << cLst->toString();
        //qDebug() << "";
        clearTempVars();
    }
    return true;
}

//return contact list
ContactList *XmlContactHandler::getContactLst()
{
    return cLst;
}

//clear temp private variables
void XmlContactHandler::clearTempVars()
{
    tempEndElementCounter = 0;
    tempPk = -1;
    tempCategory = -1;
    tempFirstName = "";
    tempLastName = "";
    tempStreetAddress = "";
    tempZipCode = "";
    tempCity = "";
    tempPhoneNumber = "";
}
