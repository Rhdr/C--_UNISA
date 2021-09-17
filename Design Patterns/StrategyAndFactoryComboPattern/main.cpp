#include <QCoreApplication>
#include "strategyattack.h"
#include "factory.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    FactoryAbstract* strageyFactory = new Factory();
    StrategyAttack* strategyAttack = strageyFactory->createAttackStrategy("saberReckless", "yoda");
    strategyAttack->attack();

    return a.exec();
}
