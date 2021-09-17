#include "transportvehicle.h"

TransportVehicle::TransportVehicle(float vehicleCarryingCapacityKg) :
    Vehicle(), carryingCapacityKg(vehicleCarryingCapacityKg)
{

}

TransportVehicle::TransportVehicle(QString vehicleModel, int vehicleYear, float vehicleCarryingCapacityKg) :
    Vehicle(vehicleModel, vehicleYear), carryingCapacityKg(vehicleCarryingCapacityKg)
{
}

QString TransportVehicle::toString()
{
    return QString("%1; carryingCapacityKg = %2").arg(Vehicle::toString()).arg(carryingCapacityKg);
}
float TransportVehicle::getCarryingCapacityKg() const
{
    return carryingCapacityKg;
}

void TransportVehicle::setCarryingCapacityKg(float value)
{
    carryingCapacityKg = value;
}

