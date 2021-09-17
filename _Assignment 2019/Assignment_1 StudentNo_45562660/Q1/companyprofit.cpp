#include "companyprofit.h"

CompanyProfit::CompanyProfit(QObject *parent) :
    Company(parent)
{
}

CompanyProfit::CompanyProfit(QObject *parent, bool NPO_, QString name_, QDate date_, int employees_) :
    Company(parent, NPO_, name_, date_), employees(employees_)
{
}

int CompanyProfit::getEmployees() const
{
    return employees;
}

void CompanyProfit::setEmployees(int value)
{
    employees = value;
}

const QString CompanyProfit::toString()
{
    return QString("%1, Employees(%2)").arg(Company::toString())
                                       .arg(employees);
}

