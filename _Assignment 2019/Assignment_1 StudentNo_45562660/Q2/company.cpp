#include "company.h"

Company::Company(QObject *parent) :
    QObject(parent)
{
}

Company::Company(QObject *parent, bool NPO_, QString name_, QDate date_) :
    QObject(parent), NPO(NPO_), name(name_), date(date_)
{
}

bool Company::getNPO() const
{
    return NPO;
}

void Company::setNPO(bool value)
{
    NPO = value;
}

QString Company::getName() const
{
    return name;
}

void Company::setName(const QString &value)
{
    name = value;
}

QDate Company::getDate() const
{
    return date;
}

void Company::setDate(const QDate &value)
{
    date = value;
}

const QString Company::toString()
{
    return QString("Name(%1), Type(%2), Date(%3)")
            .arg(name)
            .arg((NPO) ? "Non Profit" : "Profit")
            .arg(date.toString("yyyy.MMM.dd"))
            .leftJustified(4, ' ');
}
