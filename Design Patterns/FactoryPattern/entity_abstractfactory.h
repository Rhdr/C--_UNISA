#ifndef ENTITY_ABSTRACTFACTORY_H
#define ENTITY_ABSTRACTFACTORY_H

#include <QObject>
#include "entity.h"

class Entity_AbstractFactory : public QObject
{
    Q_OBJECT
public:
    explicit Entity_AbstractFactory();
    virtual Entity* makeEntity(QString entityType, QStringList entityValues) = 0;
signals:

public slots:

};

#endif // ENTITY_ABSTRACTFACTORY_H
