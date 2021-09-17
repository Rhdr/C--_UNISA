#ifndef ENTITY_EMPLOYEE_H
#define ENTITY_EMPLOYEE_H

#include <QObject>
#include "entity.h"

class Entity_Employee : public Entity
{
public:
    explicit Entity_Employee(QString nameP, double salaryP);
    QString toString();

private:
    double salary;

};

#endif // ENTITY_EMPLOYEE_H
