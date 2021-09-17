#ifndef FACTORYIOFIELDABSTRACT_H
#define FACTORYIOFIELDABSTRACT_H

#include "iofield.h"

class FactoryIOFieldAbstract
{
public:
    FactoryIOFieldAbstract();
    virtual ~FactoryIOFieldAbstract();
    virtual IOField *createIOField(QString ioField) = 0;
};

#endif // FACTORYIOFIELDABSTRACT_H
