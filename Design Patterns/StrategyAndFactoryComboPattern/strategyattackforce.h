#ifndef STRATEGYATTACKFORCE_H
#define STRATEGYATTACKFORCE_H

#include "strategyattack.h"

class StrategyAttackForce : public StrategyAttack
{
public:
    StrategyAttackForce(QString objP, int effortP, int angleP, int focusP);
    void attack();
};

#endif // STRATEGYATTACKFORCE_H
