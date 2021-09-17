#ifndef VEHICLEPASSANGER_H
#define VEHICLEPASSANGER_H

#include "vehicle.h"

class VehiclePassanger : public Vehicle
{
    Q_OBJECT
    Q_PROPERTY(int noPassengers READ getNoPassengers WRITE setNoPassengers)

public:
    VehiclePassanger(QString modelP, int yearP, int noPassengersP);
    QString toString();

    int getNoPassengers() const;
    void setNoPassengers(int value);

private:
    int noPassengers;
};

#endif // VEHICLEPASSANGER_H
