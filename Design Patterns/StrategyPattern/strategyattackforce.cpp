#include "strategyattackforce.h"

StrategyAttackForce::StrategyAttackForce()
{
    //
}


void StrategyAttackForce::attack(QString obj)
{
    qDebug() << QString("Attacking %1, with the force,,, woosh!").arg(obj);
}
