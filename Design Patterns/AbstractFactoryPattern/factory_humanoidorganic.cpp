#include "factory_humanoidorganic.h"

Factory_HumanoidOrganic::Factory_HumanoidOrganic()
{
    //
}

Heart *Factory_HumanoidOrganic::creatHeart()
{
    return new HeartOrganic(20, 2);
}

Arm *Factory_HumanoidOrganic::createArm()
{
    return new ArmOrganic(5, 2);
}
