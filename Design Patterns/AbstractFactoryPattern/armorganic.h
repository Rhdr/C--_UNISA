#ifndef ARMORGANIC_H
#define ARMORGANIC_H

#include "arm.h"

class ArmOrganic : public Arm
{
public:
    explicit ArmOrganic(int strengthP, int dexterityBonusP, QObject *parent = 0);
    QString toString();

private:
    int dexterityBonus;
};

#endif // ARMORGANIC_H
