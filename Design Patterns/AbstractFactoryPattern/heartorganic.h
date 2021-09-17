#ifndef HEARTORGANIC_H
#define HEARTORGANIC_H

#include "heart.h"

class HeartOrganic : public Heart
{
public:
    explicit HeartOrganic(int hitpointsP, int recoveryRateP, QObject *parent = 0);
    QString toString();

private:
    int recoveryRate;
};

#endif // HEARTORGANIC_H
