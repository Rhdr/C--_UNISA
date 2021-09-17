#include "serializer.h"

bool Serializer::writeToFile(QList<Company *> lst, QString path)
{
    QFile data(path);
    if (data.open(QFile::WriteOnly | QFile::Truncate)) {
        QTextStream out(&data);

        //loop through object lst
        for (int objNo = 0; objNo < lst.length(); objNo++){
            const QMetaObject* metaObj = lst[objNo]->metaObject();

            //loop through each object's properties
            for (int propNo = 1; propNo < metaObj->propertyCount(); propNo++){
                QMetaProperty metaProp = metaObj->property(propNo);
                const char *name = metaProp.name();
                QVariant propertyVar = lst[objNo]->property(name);
                out << QString(name) << "("<< propertyVar.toString() << "), ";
                delete name;
            }
            delete metaObj;
            out << endl;
            out.flush();
        }
        data.close();
        return true;
    } else {
        return false;
    }
}

QList<Company*> Serializer::readFromFile(QString path)
{
    QList<Company*> companyLst;
    QFile data(path);
    if (data.open(QFile::ReadOnly)) {
        QTextStream cin(&data);
        QStringList lstRow;
        QString line;        
        while(!cin.atEnd()){
            //get data
            line = cin.readLine();
            lstRow = line.split(QRegExp(", "));
            QString npoStr = lstRow[0].replace("NPO(", "").replace(")", "");
            bool npo = (npoStr == "true" ? true : false);
            QString name = lstRow[1].replace("name(", "").replace(")", "");
            QDate date = QDate::fromString((lstRow[2].replace("date(", "").replace(")", "")), "yyyy-MM-dd");

            //test company type
            Company *company;   //pointer added to return list, do not delete
            bool charitable;
            int employees;
            if(npo){
                //non profit company
                QString charitableStr = lstRow[3].replace("isCharitable(", "").replace(")", "");
                charitable = charitableStr == "true" ? true : false;
                company = new CompanyNonProfit(0);
            } else {
                //profit company
                employees = (lstRow[3].replace("employees(", "").replace(")", "")).toInt();
                company = new CompanyProfit(0);
            }

            //set company
            const QMetaObject *companyMeta = company->metaObject();
            for(int propNo = 1; propNo < companyMeta->propertyCount(); propNo++){
                QMetaProperty metaProp = companyMeta->property(propNo);
                const char *nameProp = metaProp.name();
                if (QString(nameProp) == "NPO"){
                    company->setProperty(nameProp, npo);
                } else if (QString(nameProp) == "name"){
                    company->setProperty(nameProp, name);
                } else if (QString(nameProp) == "date"){
                    company->setProperty(nameProp, date);
                } else if (QString(nameProp) == "isCharitable"){
                    company->setProperty(nameProp, charitable);
                } else if (QString(nameProp) == "employees"){
                    company->setProperty(nameProp, employees);
                }
                delete nameProp;
            }
            delete companyMeta;

            //append & return
            companyLst.append(company);
            cin.flush();
        }
        data.close();
    }
    return companyLst;
}

bool Serializer::saveExist(QString path)
{
    //check if there is a saved file
    QFile data(path);
    return data.exists();
}
