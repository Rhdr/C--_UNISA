#ifndef TRANSPORTVEHICLE_H
#define TRANSPORTVEHICLE_H

#include <QObject>
#include "vehicle.h"

class TransportVehicle : public Vehicle
{

public:
    TransportVehicle(float vehicleCarryingCapacityKg=500);
    TransportVehicle(QString vehicleModel, int vehicleYear, float vehicleCarryingCapacityKg);
    QString toString();

    float getCarryingCapacityKg() const;
    void setCarryingCapacityKg(float value);

private:
    float carryingCapacityKg;
};

#endif // TRANSPORTVEHICLE_H
