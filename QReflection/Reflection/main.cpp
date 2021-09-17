#include <QCoreApplication>
#include <QDebug>
#include <QList>
#include "vehiclepassanger.h"
#include "vehicletransport.h"
#include "filewriter.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    VehiclePassanger vp1("ToyotaA", 2000, 8);
    VehiclePassanger vp2("ToyotaB", 2001, 12);
    VehiclePassanger vp3("ToyotaC", 2012, 5);

    VehicleTransport vt1("MercA", 2013, 5000);
    VehicleTransport vt2("MercB", 2015, 6000);
    VehicleTransport vt3("MercC", 1923, 1000);

    QList<QObject *> vLst;
    vLst.append(&vp1);
    vLst.append(&vp2);
    vLst.append(&vp3);
    vLst.append(&vt1);
    vLst.append(&vt2);
    vLst.append(&vt3);

    //Dynamic properties
    VehiclePassanger vp4("ToyotaD", 1999, 22);
    vp1.setProperty("myNewAttribute", "value");

    foreach(QObject* obj, vLst){
        Vehicle* v = dynamic_cast<Vehicle*>(obj);
        qDebug() << v->toString();
    }

    FileWriter writer(&vLst, "ouput.txt");
    writer.write();

    return a.exec();
}
