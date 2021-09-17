#include "heartrobotic.h"

HeartRobotic::HeartRobotic(int hitpointsP, int shieldPowerP, QObject *parent) :
    Heart(hitpointsP, parent), shieldPower(shieldPowerP)
{
    //
}

QString HeartRobotic::toString()
{
    return QString("%1, Robotic ShieldPower: %2").arg(Heart::toString()).arg(shieldPower);
}
