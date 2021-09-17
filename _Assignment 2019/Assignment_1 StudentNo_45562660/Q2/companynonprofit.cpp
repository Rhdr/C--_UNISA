#include "companynonprofit.h"

CompanyNonProfit::CompanyNonProfit(QObject *parent) :
    Company(parent)
{
}

CompanyNonProfit::CompanyNonProfit(QObject *parent, bool NPO_, QString name_, QDate date_, bool isCharitable_) :
    Company(parent, NPO_, name_, date_), isCharitable(isCharitable_)
{
}

bool CompanyNonProfit::getIsCharitable() const
{
    return isCharitable;
}

void CompanyNonProfit::setIsCharitable(bool value)
{
    isCharitable = value;
}

const QString CompanyNonProfit::toString()
{
    return QString("%1, Charitable(%2)").arg(Company::toString())
                                        .arg((isCharitable) ? "true" : "false");
}

