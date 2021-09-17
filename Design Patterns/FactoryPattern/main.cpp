#include <QCoreApplication>
#include <QDebug>
#include "entity_employee.h"
#include "entity_landowner.h"
#include "entity.h"

#include "entity_abstractfactory.h"
#include "entity_factory.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //Entity *e = new Entity("Max");    //protected
    QStringList lst;
    lst << "House1" << "House2" << "House3";
    Entity* e1 = new Entity_Landowner("Max", lst);
    qDebug() << e1->toString();
    Entity* e2 = new Entity_Employee("Sam", 100.99);
    qDebug() << e2->toString();

    delete e1;
    delete e2;

    Entity_AbstractFactory* factory = new Entity_Factory();
    Entity* emp;
    Entity* owner;
    QStringList data;
    emp = factory->makeEntity(QString("Employee"), data << "John" << "9937.1234");
    data.clear();
    owner = factory->makeEntity(QString("Landowner"), data << "Andrew" << "Prop1" << "Prop2");
    qDebug() << emp->toString();
    qDebug() << owner->toString();

    delete emp;
    delete owner;
    delete factory;

    return a.exec();
}
