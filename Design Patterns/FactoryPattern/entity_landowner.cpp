#include "entity_landowner.h"

Entity_Landowner::Entity_Landowner(QString nameP, QStringList propertyListP) :
    Entity(nameP), propertyList(propertyListP)
{
}

QString Entity_Landowner::toString()
{
    return QString("%1, Properties: %2").arg(Entity::toString())
                                        .arg(propertyList.join(", "));
}
