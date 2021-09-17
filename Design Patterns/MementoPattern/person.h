#ifndef PERSON_H
#define PERSON_H

#include <QString>
#include "memento.h"

class Person
{
public:
    Person(QString nameP, int ageP);
    QString toString();
    Memento createMemento() const;
    void restoreMemento(Memento mem);

    QString getName() const;
    void setName(const QString &value);

    int getAge() const;
    void setAge(int value);

private:
    QString name;
    int age;
};

#endif // PERSON_H
