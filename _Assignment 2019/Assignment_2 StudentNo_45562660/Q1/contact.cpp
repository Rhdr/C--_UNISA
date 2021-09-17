#include "contact.h"

//constructor
Contact::Contact(int pk_, int c, QString fn, QString ln, QString sa, QString zc, QString cy, QString pn):
    pk(pk_), category(c),firstName (fn), lastName (ln), streetAddress(sa), zipCode(zc), city (cy), phoneNumber(pn){
}

//returns the pk
int Contact::getPk() const
{
    return pk;
}

void Contact::setPk(int pkP)
{
    pk = pkP;
}

//returns the category
int Contact::getCategory()const{
    return category;
}

void Contact::setCategory(int categoryP)
{
    category = categoryP;
}

//returns the first name
QString Contact::getFirstName()const{
    return firstName;
}

void Contact::setFirstName(QString firstNameP)
{
    firstName = firstNameP;
}

//returns the last name
QString Contact::getLastName()const{
    return lastName;
}

void Contact::setLastName(QString lastNameP)
{
    lastName = lastNameP;
}

//returns the street address
QString Contact::getStreetAddress()const{
    return streetAddress;
}

void Contact::setStreetAddress(QString streetAddressP)
{
    streetAddress = streetAddressP;
}

//returns the zip code
QString Contact::getZipCode()const{
    return zipCode;
}

void Contact::setZipCode(QString zipCodeP)
{
    zipCode = zipCodeP;
}

//returns the city
QString Contact::getCity()const{
    return city;
}

void Contact::setCity(QString cityP)
{
    city = cityP;
}

//returns the phone number
QString Contact::getPhoneNumber()const{
    return phoneNumber;
}

void Contact::setPhoneNumber(QString phoneNumberP)
{
    phoneNumber = phoneNumberP;
}

QStringList Contact::getFieldNames()
{
    QStringList lst;
    lst << "Pk" << "Category" << "Full Name" <<
           "Street Address" << "City" << "Zip Code" << "Phone Number";
    return lst;
}

//returns the string representation of contact
QString Contact::toString()const{
    QString result =  QString::number(pk) + ", " + QString::number(category,10) + ", " + firstName + " " + lastName + ", " + streetAddress +  ", " + city + ", " + zipCode + ", " + phoneNumber;
    return result;
}

