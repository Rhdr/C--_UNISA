#ifndef VEHICLETRANSPORT_H
#define VEHICLETRANSPORT_H

#include "vehicle.h"

class VehicleTransport : public Vehicle
{
    Q_OBJECT
    Q_PROPERTY(int capacity READ getCapacity WRITE setCapacity)

public:
    VehicleTransport(QString modelP, int yearP, int capacityP);
    QString toString();

    int getCapacity() const;
    void setCapacity(int value);

private:
    int capacity;
};

#endif // VEHICLETRANSPORT_H
