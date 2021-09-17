#ifndef FACTORYABSTRACT_HUMANOID_H
#define FACTORYABSTRACT_HUMANOID_H

#include <QObject>
#include "heart.h"
#include "arm.h"

class FactoryAbstract_Humanoid : public QObject
{
    Q_OBJECT
public:
    explicit FactoryAbstract_Humanoid(QObject *parent = 0);
    virtual Heart* creatHeart() = 0;
    virtual Arm* createArm() = 0;
};

#endif // FACTORYABSTRACT_HUMANOID_H
