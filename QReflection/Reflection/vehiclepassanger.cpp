#include "vehiclepassanger.h"

VehiclePassanger::VehiclePassanger(QString modelP, int yearP, int noPassengersP) :
    Vehicle(modelP, yearP), noPassengers(noPassengersP)
{
}

QString VehiclePassanger::toString()
{
    return QString("model: %1, year: %2, noPassengers: %3").arg(model).arg(year).arg(noPassengers);
}
int VehiclePassanger::getNoPassengers() const
{
    return noPassengers;
}

void VehiclePassanger::setNoPassengers(int value)
{
    noPassengers = value;
}

