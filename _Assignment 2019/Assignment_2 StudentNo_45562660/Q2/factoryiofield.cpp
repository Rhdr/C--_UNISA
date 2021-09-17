#include "factoryiofield.h"

FactoryIOField *FactoryIOField::onlyInstance = NULL;

FactoryIOField::FactoryIOField()
{    
}

FactoryIOField *FactoryIOField::getInstance()
{
    if(onlyInstance == NULL){
        onlyInstance = new FactoryIOField();
    }
    return onlyInstance;
}

IOField *FactoryIOField::createIOField(QString ioField)
{
    if (ioField == "int"){
        return new IntIOField();
    } else if (ioField == "string"){
        return new StringIOField();
    } else if (ioField == "stringList"){
        return new StringListIOField();
    } else {
        return NULL;
    }
}
