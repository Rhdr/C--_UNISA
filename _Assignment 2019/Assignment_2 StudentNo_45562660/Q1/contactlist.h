#ifndef CONTACTLIST_H
#define CONTACTLIST_H

#include "contact.h"
#include "categorylist.h"
#include <QStringList>
#include <QObject>
#include <QDebug>
#include <QList>

class ContactList : public QObject
{
    Q_OBJECT

public:
    explicit ContactList();
    //to add a contact
    void add(Contact* c);
    //to remove a contact
    void remove(Contact* c);
    //to remove a contact based on its pk
    void remove(int pk);
    //to return the phone numbers of all the contacts
    QStringList getPhoneList(int c)const;
    //to return the addresses of all the contacts
    QStringList getMailingList(int c)const;
    //return a qList of contacts
    QList<Contact*> getContactQList();
    //to return a string representation of all the contacts in the list
    QString toString()const;
    //to return the size of the list
    int getSize()const;
    //return a qStringList of categories
    QStringList getCategoryStringList();

signals:
    void newCategoryAdded(int category);
    void deletedCategory(int category);

private:
    CategoryList categoryLst;
};

#endif
