#include "entity_factory.h"

Entity_Factory::Entity_Factory()
{
    //
}

Entity *Entity_Factory::makeEntity(QString entityType, QStringList entityValues)
{
    if(entityType == "Employee"){
        return new Entity_Employee(entityValues[0], entityValues[1].toDouble());

    } else if(entityType == "Landowner"){
        QString entityName = entityValues[0];
        entityValues.pop_front();
        return new Entity_Landowner(entityName, entityValues);

    } else{
        qDebug() << QString("Entity_Factory: entityType %1, does not exist in the factory").arg(entityType);
        throw "entityType error";
    }
}
