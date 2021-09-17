#include <QCoreApplication>
#include <QDebug>
#include "person.h"
#include "memento.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Person* p1 = new Person("Max", 39);
    Memento mem_p1 = p1->createMemento();
    qDebug() << p1->toString();

    p1->setName("meh");
    p1->setAge(2);
    qDebug() << p1->toString();

    p1->restoreMemento(mem_p1);
    qDebug() << p1->toString();

    delete p1;

    return a.exec();
}
