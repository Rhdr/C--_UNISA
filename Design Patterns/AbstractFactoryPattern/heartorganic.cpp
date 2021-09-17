#include "heartorganic.h"

HeartOrganic::HeartOrganic(int hitpointsP, int recoveryRateP, QObject *parent) :
    Heart(hitpointsP, parent), recoveryRate(recoveryRateP)
{
    //
}

QString HeartOrganic::toString()
{
    return QString("%1, Organic RecoveryRate: %2").arg(Heart::toString()).arg(recoveryRate);
}
