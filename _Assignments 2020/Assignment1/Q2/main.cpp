#include <QCoreApplication>
#include <QList>
#include <QDebug>
#include "vehicle.h"
#include "passengervehicle.h"
#include "transportvehicle.h"
#include "filewriter.h"

#include <QMetaObject>
#include <QMetaProperty>
#include <QVariant>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QList<QObject *> vehicleLst;

    Vehicle v1;
    Vehicle v2("Toyota", 2014);
    TransportVehicle tv1;
    TransportVehicle tv2("Hyundai", 2013, 850);
    PassengerVehicle pv1;
    PassengerVehicle pv2("Pruis", 2000, 2);


    const QMetaObject* metaObject = v1.metaObject(); // obj->metaObject();

    for(int i = 0; i < metaObject->methodCount(); i++){
        QMetaProperty property = metaObject->property(i);
        const char* propertyName =  property.name();
        qDebug() << "PropertyName" << QString(propertyName);
        QVariant propertyValue = v1.property(propertyName);
        qDebug() << "PropertyValue" << propertyValue.toString();
    }

    vehicleLst.append(&v1);
    vehicleLst.append(&v2);
    vehicleLst.append(&tv1);
    vehicleLst.append(&tv2);
    vehicleLst.append(&pv1);
    vehicleLst.append(&pv2);

    FileWriter writer;
    qDebug() << "No of items written: " << writer.writeObject(vehicleLst);
    /*QList<Vehicle *>::iterator i;

    for(int i = 0; i < vehicleLst.count(); i++){
        qDebug() << vehicleLst[i]->toString();
    }*/

    return a.exec();
}
