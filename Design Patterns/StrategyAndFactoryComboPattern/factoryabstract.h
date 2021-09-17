#ifndef FACTORYABSTRACT_H
#define FACTORYABSTRACT_H

#include "strategyattack.h"

class FactoryAbstract
{
public:
    FactoryAbstract();
    virtual StrategyAttack* createAttackStrategy(QString attackStrategyType, QString obj) = 0;

};

#endif // FACTORYABSTRACT_H
