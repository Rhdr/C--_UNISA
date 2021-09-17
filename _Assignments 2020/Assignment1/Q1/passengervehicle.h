#ifndef PASSENGERVEHICLE_H
#define PASSENGERVEHICLE_H

#include <QObject>
#include "vehicle.h"

class PassengerVehicle : public Vehicle
{

public:
    PassengerVehicle(int vehicleMaxNoPassengers=5);
    PassengerVehicle(QString vehicleModel, int vehicleYear, int vehicleMaxNoPassengers);
    QString toString();

    int getMaxNoPassengers() const;
    void setMaxNoPassengers(int value);

private:
    int maxNoPassengers;
};

#endif // PASSENGERVEHICLE_H
