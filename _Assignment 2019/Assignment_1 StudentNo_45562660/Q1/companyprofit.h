#ifndef COMPANYPROFIT_H
#define COMPANYPROFIT_H

#include <QObject>
#include "company.h"

class CompanyProfit : public Company
{
    Q_OBJECT
public:
    explicit CompanyProfit(QObject *parent);
    explicit CompanyProfit(QObject *parent, bool NPO_, QString name_, QDate date_, int employees_);

    int getEmployees() const;
    void setEmployees(int value);
    const QString toString();

signals:

public slots:

private:
    int employees; //charitable org also have employees... should be revised in future itteration
};

#endif // COMPANYPROFIT_H
