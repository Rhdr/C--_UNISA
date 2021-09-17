#include "factory_humanoidrobotic.h"

Factory_HumanoidRobotic::Factory_HumanoidRobotic()
{
    //
}

Heart *Factory_HumanoidRobotic::creatHeart()
{
    return new HeartRobotic(30, 5);
}

Arm *Factory_HumanoidRobotic::createArm()
{
    return new ArmRobotic(5, 3);
}
