#ifndef CONTACT_H
#define CONTACT_H

#include <QStringList>
#include <QString>
#include <QObject>

class Contact : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int pk READ getPk WRITE setPk)
    Q_PROPERTY(int category READ getCategory WRITE setCategory)
    Q_PROPERTY(QString firstName READ getFirstName WRITE setFirstName)
    Q_PROPERTY(QString lastName READ getLastName WRITE setLastName)
    Q_PROPERTY(QString streetAddress READ getStreetAddress WRITE setStreetAddress)
    Q_PROPERTY(QString zipCode READ getZipCode WRITE setZipCode)
    Q_PROPERTY(QString city READ getCity WRITE setCity)
    Q_PROPERTY(QString phoneNumber READ getPhoneNumber WRITE setPhoneNumber)

public:
   //constructor
   explicit Contact(int pk_, int c, QString fn, QString ln, QString sa, QString zc, QString cy, QString pn);

   //to return a string representation of contact
   QString toString()const;

   //getters & setters
   int getPk()const;
   void setPk(int pkP);

   int getCategory()const;
   void setCategory(int categoryP);

   QString getFirstName()const;
   void setFirstName(QString firstNameP);

   QString getLastName()const;
   void setLastName(QString lastNameP);

   QString getStreetAddress()const;
   void setStreetAddress(QString streetAddressP);

   QString getZipCode()const;
   void setZipCode(QString zipCodeP);

   QString getCity()const;
   void setCity(QString cityP);

   QString getPhoneNumber()const;
   void setPhoneNumber(QString phoneNumberP);


   //string list of header field names for tableviews
   static QStringList getFieldNames();


private:
   //data members
   int pk;
   int category;
   QString firstName;
   QString lastName;
   QString streetAddress;
   QString zipCode;
   QString city;
   QString phoneNumber;
   QStringList fieldNames;
};
#endif

