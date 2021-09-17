#include "armrobotic.h"

ArmRobotic::ArmRobotic(int strengthP, int bonusAttackStrengthP, QObject *parent) :
    Arm(strengthP, parent), bonusAttackStrength(bonusAttackStrengthP)
{
    //
}

QString ArmRobotic::toString()
{
    return QString("%1, Robotic bonusAttackStrength: %2").arg(Arm::toString()).arg(bonusAttackStrength);
}
