#ifndef ENTITY_FACTORY_H
#define ENTITY_FACTORY_H

#include <QDebug>
#include "entity_abstractfactory.h"
#include "entity_landowner.h"
#include "entity_employee.h"

class Entity_Factory : public Entity_AbstractFactory
{
public:
    explicit Entity_Factory();
    Entity* makeEntity(QString entityType, QStringList entityValues);
};

#endif // ENTITY_FACTORY_H
