#include <QCoreApplication>
#include <QDebug>
#include "solo.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Solo* s1 = Solo::getInstance();
    s1->setX("Car");
    s1->setY("Bike");

    qDebug() << s1->getX() << s1->getY();

    Solo* s2 = Solo::getInstance();
    s2->setX("baby");

    qDebug() << s1->getX() << s1->getY();
    qDebug() << s2->getX() << s2->getY();

    return a.exec();
}
