#include "ContactList.h"
#include <QList>

ContactList::ContactList()
{
    //foward signals
    QObject::connect(&categoryLst, SIGNAL(newCategoryAdded(int)),
                     this, SIGNAL(newCategoryAdded(int)));
    QObject::connect(&categoryLst, SIGNAL(deletedCategory(int)),
                     this, SIGNAL(deletedCategory(int)));
}

//adds a contact
void ContactList::add(Contact* c){
    categoryLst.add(c->getCategory());
    c->setParent(this);
}

//removes a contact if in the list
void ContactList::remove(Contact* c){
    QList<Contact*> list = this->findChildren<Contact*>();    
    foreach (Contact* co, list){
        if((co->getFirstName() == c->getFirstName()) && (co->getLastName() == c->getLastName())){
            categoryLst.remove(co->getCategory());
            delete co;
        }
    }
}

//to remove a contact based on its pk
void ContactList::remove(int pk)
{
    QList<Contact*> list = this->findChildren<Contact*>();
    foreach (Contact* co, list){
        if(co->getPk() == pk){
            categoryLst.remove(co->getCategory());
            delete co;
        }

    }
}

//returns the size of the list
int ContactList::getSize()const{   
    return this->findChildren<Contact*>().size();
}

//return a qStringList of categories
QStringList ContactList::getCategoryStringList()
{
    return categoryLst.getCategoryStringList();
}

//returns the phone list given a category
QStringList ContactList::getPhoneList(int c)const{
    QStringList phoneList;
    QString entry;
    QList<Contact*> list = this->findChildren<Contact*>();
     foreach (Contact* co, list){
        if (co->getCategory() == c){
            entry = co->getFirstName()+ " " + co->getLastName() + ", " + co->getPhoneNumber();
            phoneList << entry;
        }
    }
    return phoneList;
}

//returns the addresses given a category
QStringList ContactList::getMailingList(int c)const{
    QStringList mailingList;
    QString entry;
    QList<Contact*> list = this->findChildren<Contact*>();
     foreach (Contact* co, list){
        if (co->getCategory() == c){
            entry = co->getFirstName()+ " " + co->getLastName() + ", " +co->getStreetAddress()+ ", " + co->getCity()+ ", " +co->getZipCode();
            mailingList << entry;
        }
    }
     return mailingList;
}

//return a qList of contacts
QList<Contact *> ContactList::getContactQList()
{
    return this->findChildren<Contact*>();
}

//returns a string representation of the list
QString ContactList::toString()const{
    QString entry;
    QList<Contact*> list = this->findChildren<Contact*>();
     foreach (Contact* co, list){
        entry = entry + co->toString() + "\n";
    }
    return entry;
}
