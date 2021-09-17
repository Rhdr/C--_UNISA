#include "entity_employee.h"

Entity_Employee::Entity_Employee(QString nameP, double salaryP) :
    Entity(nameP), salary(salaryP)
{
    //
}

QString Entity_Employee::toString()
{
    return QString("%1, Salary: R %2").arg(Entity::toString())
                                      .arg(salary);
}
