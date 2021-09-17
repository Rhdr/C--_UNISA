#include "person.h"

Person::Person(QString nameP, int ageP) :
    name(nameP), age(ageP)
{
    //
}

QString Person::toString()
{
    return QString("Name: %1, Age: %2").arg(name).arg(age);
}

Memento Person::createMemento() const
{
    QStringList lst;
    lst << name << QString::number(age);
    Memento mem;
    mem.saveState(lst);
    return mem;
}

void Person::restoreMemento(Memento mem)
{
    QStringList lst = mem.getState();
    name = lst[0];
    age = lst[1].toInt();
}
QString Person::getName() const
{
    return name;
}

void Person::setName(const QString &value)
{
    name = value;
}
int Person::getAge() const
{
    return age;
}

void Person::setAge(int value)
{
    age = value;
}


