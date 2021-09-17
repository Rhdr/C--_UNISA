#include "serializer.h"

bool Serializer::writeToFile(QList<Company *> lst, QString path)
{
    //save to disk
    QFile data(path);
    if (data.open(QFile::WriteOnly | QFile::Truncate)) {
        QTextStream out(&data);
        for (int i = 0; i < lst.length(); i++){
            out << lst[i]->toString() << endl;
        }
        out.flush();
        data.close();
        return true;
    } else {
        return false;
    }
}

QList<Company *> Serializer::readFromFile(QString path)
{
    //read the saved file
    QList<Company*> companyLst;
    QFile data(path);
    if (data.open(QFile::ReadOnly)) {
        QTextStream cin(&data);
        QStringList lstRow;
        QString line;        
        while(!cin.atEnd()){
            line = cin.readLine();
            lstRow = line.split(QRegExp(", "));
            QString name = lstRow[0].replace("Name(", "").replace(")", "");
            QString npoStr = (lstRow[1].replace("Type(", "").replace(")", ""));
            bool npo = npoStr == "Profit" ? false : true;
            QDate date = QDate::fromString(lstRow[2].replace("Date(", "").replace(")", ""), "yyyy.MMM.dd");
            if (npo){
                //non profit compnay
                QString charitableStr = lstRow[3].replace("Charitable(", "").replace(")", "");
                bool charitable = charitableStr == "True" ? true : false;
                Company *companyNonProfit = new CompanyNonProfit(0, npo, name, date, charitable);   //do not delete pointer, part of return value
                companyLst.append(companyNonProfit);
            } else {
                //profit company
                int employees = (lstRow[3].replace("Employees(", "").replace(")", "")).toInt();
                Company *companyProfit = new CompanyProfit(0, npo, name, date, employees);      //do not delete pointer, part of return value
                companyLst.append(companyProfit);
            }
        }
        cin.flush();
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

