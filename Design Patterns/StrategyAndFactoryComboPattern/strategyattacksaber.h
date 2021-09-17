#ifndef STRATEGYATTACKSABER_H
#define STRATEGYATTACKSABER_H

#include "strategyattack.h"

class StrategyAttackSaber : public StrategyAttack
{
public:
    StrategyAttackSaber(QString objP, int effortP, int angleP, int focusP);
    void attack();
};

#endif // STRATEGYATTACKSABER_H
