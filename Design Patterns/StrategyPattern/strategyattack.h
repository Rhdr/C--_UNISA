#ifndef STRATEGYATTACK_H
#define STRATEGYATTACK_H

#include <QString>
#include <QDebug>

class StrategyAttack
{
public:
    StrategyAttack();
    virtual void attack(QString obj) = 0;
};

#endif // STRATEGYATTACK_H
