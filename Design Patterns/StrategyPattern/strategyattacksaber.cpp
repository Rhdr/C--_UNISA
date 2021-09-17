#include "strategyattacksaber.h"

StrategyAttackSaber::StrategyAttackSaber()
{
    //
}


void StrategyAttackSaber::attack(QString obj)
{
    qDebug() << QString("Attacking %1, with a saber,,, waam!").arg(obj);
}
