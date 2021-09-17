#include "strategyattacksaber.h"

StrategyAttackSaber::StrategyAttackSaber(QString objP, int effortP, int angleP, int focusP) :
    StrategyAttack(objP, effortP, angleP, focusP)
{
    //
}

void StrategyAttackSaber::attack()
{
    qDebug() << QString("Attacking %1, with a saber,,, waam! effort: %2, angle: %3, focus: %4").arg(obj).arg(effort).arg(angle).arg(focus);
}
