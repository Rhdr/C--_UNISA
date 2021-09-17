#include "strategyattackforce.h"

StrategyAttackForce::StrategyAttackForce(QString objP, int effortP, int angleP, int focusP) :
     StrategyAttack(objP, effortP, angleP, focusP)
{
    //
}

void StrategyAttackForce::attack()
{
    qDebug() << QString("Attacking %1, with the force,,, woosh! effort: %2, angle: %3, focus: %4").arg(obj).arg(effort).arg(angle).arg(focus);
}


