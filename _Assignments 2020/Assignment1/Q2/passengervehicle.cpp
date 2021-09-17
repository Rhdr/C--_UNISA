#include "passengervehicle.h"

PassengerVehicle::PassengerVehicle(int vehicleMaxNoPassengers) :
    Vehicle(), maxNoPassengers(vehicleMaxNoPassengers)
{
}

PassengerVehicle::PassengerVehicle(QString vehicleModel, int vehicleYear, int vehicleMaxNoPassengers) :
    Vehicle(vehicleModel, vehicleYear), maxNoPassengers(vehicleMaxNoPassengers)
{
}

QString PassengerVehicle::toString()
{
    return  QString("%1; maxNoPassengers = %2").arg(Vehicle::toString()).arg(maxNoPassengers);
}
int PassengerVehicle::getMaxNoPassengers() const
{
    return maxNoPassengers;
}

void PassengerVehicle::setMaxNoPassengers(int value)
{
    maxNoPassengers = value;
}

