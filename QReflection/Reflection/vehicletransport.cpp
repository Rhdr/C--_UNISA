#include "vehicletransport.h"

VehicleTransport::VehicleTransport(QString modelP, int yearP, int capacityP) :
    Vehicle(modelP, yearP), capacity(capacityP)
{
    //
}

QString VehicleTransport::toString()
{
    return QString("model: %1, year: %2, noPassengers: %3").arg(model).arg(year).arg(capacity);
}
int VehicleTransport::getCapacity() const
{
    return capacity;
}

void VehicleTransport::setCapacity(int value)
{
    capacity = value;
}

