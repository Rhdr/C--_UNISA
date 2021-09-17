#ifndef STRATEGYATTACKFORCE_H
#define STRATEGYATTACKFORCE_H

#include "strategyattack.h"

class StrategyAttackForce : public StrategyAttack
{
public:
    StrategyAttackForce();
    void attack(QString obj);
};

#endif // STRATEGYATTACKFORCE_H
