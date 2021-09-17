#include <QCoreApplication>
#include "strategyattackforce.h"
#include "strategyattacksaber.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    //StrategyAttack* strategyAttack = new StrategyAttackForce();
    StrategyAttack* strategyAttack = new StrategyAttackSaber();
    strategyAttack->attack(QString("chair"));

    return a.exec();
}
