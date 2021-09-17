#include "arm.h"

Arm::Arm(int strengthP, QObject *parent) :
    QObject(parent), strength(strengthP)
{
    //
}

QString Arm::toString()
{
    return QString("Arm: Strength: %1").arg(strength);
}
