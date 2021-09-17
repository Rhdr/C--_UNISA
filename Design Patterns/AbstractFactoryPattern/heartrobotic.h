#ifndef HEARTROBOTIC_H
#define HEARTROBOTIC_H

#include "heart.h"

class HeartRobotic : public Heart
{
public:
    explicit HeartRobotic(int hitpointsP, int shieldPowerP, QObject *parent = 0);
    QString toString();

private:
    int shieldPower;
};

#endif // HEARTROBOTIC_H
