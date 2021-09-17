#include "strategyattack.h"

StrategyAttack::StrategyAttack()
{
    //
}


void StrategyAttack::attack(QString obj)
{
    qDebug() << QString("Attacking %1, abstractly!").arg(obj);
}
