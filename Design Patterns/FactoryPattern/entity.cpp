#include "entity.h"

Entity::Entity(QString nameP) :
    name(nameP)
{
    //
}

QString Entity::toString()
{
    return QString("Name: %1").arg(name);
}

