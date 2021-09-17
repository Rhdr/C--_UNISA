#include "factory.h"

Factory::Factory()
{
}

StrategyAttack *Factory::createAttackStrategy(QString attackStrategyType, QString obj)
{
    if(attackStrategyType == "saberReckless"){
        return new StrategyAttackSaber(obj, 100, 90, 1);
    } else if(attackStrategyType == "saberGaurded"){
        return new StrategyAttackSaber(obj, 10, 70, 100);
    } else if(attackStrategyType == "saberNormal"){
        return new StrategyAttackSaber(obj, 50, 50, 50);
    } else if(attackStrategyType == "forceReckless"){
        return new StrategyAttackForce(obj, 100, 90, 1);
    } else if(attackStrategyType == "forceGaurded"){
        return new StrategyAttackForce(obj, 10, 70, 100);
    } else if(attackStrategyType == "forceNormal"){
        return new StrategyAttackForce(obj, 50, 50, 50);
    } else {
        throw("Invalid attack stragegy");
    }
}
