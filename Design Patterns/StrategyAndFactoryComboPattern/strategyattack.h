#ifndef STRATEGYATTACK_H
#define STRATEGYATTACK_H

#include <QString>
#include <QDebug>

class StrategyAttack
{
public:
    StrategyAttack(QString objP, int effortP, int angleP, int focusP);
    virtual void attack() = 0;

protected:
    QString obj;
    int effort;
    int angle;
    int focus;
};

#endif // STRATEGYATTACK_H
