#ifndef FACTORY_HUMANOIDORGANIC_H
#define FACTORY_HUMANOIDORGANIC_H

#include "factoryabstract_humanoid.h"
#include "heartorganic.h"
#include "armorganic.h"

class Factory_HumanoidOrganic : public FactoryAbstract_Humanoid
{
public:
    explicit Factory_HumanoidOrganic();
    Heart* creatHeart();
    Arm* createArm();
};

#endif // FACTORY_HUMANOIDORGANIC_H
