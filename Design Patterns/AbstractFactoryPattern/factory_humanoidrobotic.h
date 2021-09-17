#ifndef FACTORY_HUMANOIDROBOTIC_H
#define FACTORY_HUMANOIDROBOTIC_H

#include "factoryabstract_humanoid.h"
#include "heartrobotic.h"
#include "armrobotic.h"

class Factory_HumanoidRobotic : public FactoryAbstract_Humanoid
{
public:
    explicit Factory_HumanoidRobotic();
    Heart* creatHeart();
    Arm* createArm();
};

#endif // FACTORY_HUMANOIDROBOTIC_H
