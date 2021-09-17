#include "armorganic.h"

ArmOrganic::ArmOrganic(int strengthP, int dexterityBonusP, QObject *parent) :
    Arm(strengthP, parent), dexterityBonus(dexterityBonusP)
{
    //
}

QString ArmOrganic::toString()
{
    return QString("%1, Organic dexterityBonus: %2").arg(Arm::toString()).arg(dexterityBonus);
}
