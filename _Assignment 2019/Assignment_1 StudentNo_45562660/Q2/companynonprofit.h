#ifndef COMPANYNONPROFIT_H
#define COMPANYNONPROFIT_H

#include <QObject>
#include "company.h"

class CompanyNonProfit : public Company
{
    Q_OBJECT
    Q_PROPERTY(bool isCharitable READ getIsCharitable WRITE setIsCharitable)
public:
    explicit CompanyNonProfit(QObject *parent);
    explicit CompanyNonProfit(QObject *parent, bool NPO_, QString name_, QDate date_, bool isCharitable_);

    bool getIsCharitable() const;
    void setIsCharitable(bool value);
    const QString toString();

signals:

public slots:

private:
    bool isCharitable;
};

#endif // COMPANYNONPROFIT_H
