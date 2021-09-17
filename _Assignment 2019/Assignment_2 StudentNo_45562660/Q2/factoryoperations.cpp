#include "factoryoperations.h"
FactoryOperations *FactoryOperations::onlyInstance = NULL;

FactoryOperations::FactoryOperations()
{
}

FactoryOperations *FactoryOperations::getInstance()
{
    if(onlyInstance == NULL){
        onlyInstance = new FactoryOperations();
    }
    return onlyInstance;
}

Operations *FactoryOperations::createOperation(QString operation)
{
    if (operation == "int") {
        return new IntOperations();
    } else if (operation == "string") {
        return new StringOperations();
    } else if (operation == "stringList") {
        return new StringListOperations();
    } else {
        return NULL;
    }
}
