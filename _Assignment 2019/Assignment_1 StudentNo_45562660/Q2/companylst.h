#ifndef COMPANYLST_H
#define COMPANYLST_H

#include <QObject>
#include <QList>
#include <QMetaObject>
#include <QDebug>
#include "company.h"

class CompanyLst : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QList<Company*> companyProfitLst READ getCompanyProfitLst)
    Q_PROPERTY(QList<Company*> companyNonProfitLst READ getCompanyNonProfitLst)
public:
    explicit CompanyLst(QObject *parent = 0);
    ~CompanyLst();
    bool append(Company *company);
    bool remove(bool isNPO, QString toString);

    QList<Company *> getCompanyProfitLst() const;
    QList<Company *> getCompanyNonProfitLst() const;

private:
    QList<Company *> companyProfitLst;
    QList<Company *> companyNonProfitLst;
};

#endif // COMPANYLST_H
