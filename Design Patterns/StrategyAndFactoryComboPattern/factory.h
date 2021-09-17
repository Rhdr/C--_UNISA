#ifndef FACTORY_H
#define FACTORY_H

#include "factoryabstract.h"
#include "strategyattackforce.h"
#include "strategyattacksaber.h"

class Factory : public FactoryAbstract
{
public:
    Factory();
    StrategyAttack* createAttackStrategy(QString attackStrategyType, QString obj);
};

#endif // FACTORY_H
