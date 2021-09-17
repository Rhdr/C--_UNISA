#ifndef ARMROBOTIC_H
#define ARMROBOTIC_H

#include "arm.h"

class ArmRobotic : public Arm
{
public:
    explicit ArmRobotic(int strengthP, int bonusAttackStrengthP, QObject *parent = 0);
    QString toString();

private:
    int bonusAttackStrength;
};

#endif // ARMROBOTIC_H
