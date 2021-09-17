#include <QCoreApplication>
#include <QList>
#include <QDebug>
#include "vehicle.h"
#include "passengervehicle.h"
#include "transportvehicle.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QList<Vehicle *> vehicleLst;

    Vehicle v1;
    Vehicle v2("Toyota", 2014);
    TransportVehicle tv1;
    TransportVehicle tv2("Hyundai", 2013, 850);
    PassengerVehicle pv1;
    PassengerVehicle pv2("Pruis", 2000, 2);

    vehicleLst.append(&v1);
    vehicleLst.append(&v2);
    vehicleLst.append(&tv1);
    vehicleLst.append(&tv2);
    vehicleLst.append(&pv1);
    vehicleLst.append(&pv2);

    QList<Vehicle *>::iterator i;

    for(int i = 0; i < vehicleLst.count(); i++){
        qDebug() << vehicleLst[i]->toString();
    }

    return a.exec();
}
