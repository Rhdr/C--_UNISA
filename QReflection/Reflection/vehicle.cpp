#include "vehicle.h"

Vehicle::Vehicle(QString modelP, int yearP) :
    model(modelP), year(yearP)
{
    //
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


