#ifndef FACTORYOPERATIONS_H
#define FACTORYOPERATIONS_H

#include <QObject>
#include "factoryoperationsabstract.h"
#include "intoperations.h"
#include "stringoperations.h"
#include "stringlistoperations.h"

class FactoryOperations : public FactoryOperationsAbstract
{
public:
    static FactoryOperations* getInstance();
    Operations *createOperation(QString operation);

private:
    explicit FactoryOperations();
    static FactoryOperations *onlyInstance;

};

#endif // FACTORYOPERATIONS_H
