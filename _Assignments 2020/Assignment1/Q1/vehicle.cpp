#include "vehicle.h"

Vehicle::Vehicle(QString vehicleModel, int vehicleYear) :
    model(vehicleModel), year(vehicleYear)
{
}

QString Vehicle::toString()
{
    return QString("model = %1; year = %2").arg(model).arg(year);
}
QString Vehicle::getModel() const
{
    return model;
}

void Vehicle::setModel(const QString &value)
{
    model = value;
}
int Vehicle::getYear() const
{
    return year;
}

void Vehicle::setYear(int value)
{
    year = value;
}


