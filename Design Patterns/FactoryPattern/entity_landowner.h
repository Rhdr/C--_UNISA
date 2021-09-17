#ifndef ENTITY_LANDOWNER_H
#define ENTITY_LANDOWNER_H

#include <QObject>
#include <QStringList>
#include "entity.h"

class Entity_Landowner : public Entity
{
public:
    explicit Entity_Landowner(QString nameP, QStringList propertyListP);
    QString toString();

private:
    QStringList propertyList;
};

#endif // ENTITY_LANDOWNER_H
