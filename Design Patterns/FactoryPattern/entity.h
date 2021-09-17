#ifndef ENTITY_H
#define ENTITY_H

#include <QObject>

class Entity : public QObject
{
    Q_OBJECT

public:
    explicit Entity(QString name);
    virtual QString toString() = 0;

private:
    QString name;
};

#endif // ENTITY_H
