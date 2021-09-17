#ifndef FACTORYOPERATIONSABSTRACT_H
#define FACTORYOPERATIONSABSTRACT_H

#include "operations.h"

class FactoryOperationsAbstract
{
public:
    FactoryOperationsAbstract();
    virtual ~FactoryOperationsAbstract();
    virtual Operations *createOperation(QString operation) = 0;
};

#endif // FACTORYOPERATIONSABSTRACT_H
