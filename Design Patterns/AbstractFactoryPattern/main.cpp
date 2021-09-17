#include <QCoreApplication>
#include <QDebug>
#include "heartrobotic.h"
#include "armrobotic.h"

#include "factory_humanoidrobotic.h"
#include "factory_humanoidorganic.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //use AbstractFactory
    FactoryAbstract_Humanoid* factory_Humanoid = new Factory_HumanoidRobotic();
    //FactoryAbstract_Humanoid* factory_Humanoid = new Factory_HumanoidOrganic();
    Heart* heart = factory_Humanoid->creatHeart();
    Arm* leftArm = factory_Humanoid->createArm();
    Arm* rightArm = factory_Humanoid->createArm();

    qDebug() << heart->toString();
    qDebug() << leftArm->toString();
    qDebug() << rightArm->toString();


    return a.exec();
}
