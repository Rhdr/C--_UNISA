#include "companylst.h"

CompanyLst::CompanyLst(QObject *parent) :
    QObject(parent)
{
}

CompanyLst::~CompanyLst()
{
    qDeleteAll(companyNonProfitLst);
    qDeleteAll(companyProfitLst);
    companyNonProfitLst.clear();
    companyProfitLst.clear();
}

bool CompanyLst::append(Company *company)
{
    const QMetaObject *companyMeta = company->metaObject();
    //qDebug() << QString(companyMeta->className());
    if (QString(companyMeta->className()) == "CompanyProfit"){
        companyProfitLst.append(company);
        return true;
    } else {
        companyNonProfitLst.append(company);
        return true;
    }
    return false;
}

bool CompanyLst::remove(bool isNPO, QString toString)
{
    //remove company
    QList<Company *> *lst;
    if(isNPO){
        lst = &companyNonProfitLst;
    } else {
        lst = &companyProfitLst;
    }

    for(int i = 0; i < lst->length(); i++){
        if(lst->value(i)->toString() == toString){
            lst->removeAt(i); //delete from lst
            return true;
            qDebug() << "Removed";
            break;
        }
    }
    delete lst;
    return false;
}

QList<Company *> CompanyLst::getCompanyProfitLst() const
{
    return companyProfitLst;
}

QList<Company *> CompanyLst::getCompanyNonProfitLst() const
{
    return companyNonProfitLst;
}
