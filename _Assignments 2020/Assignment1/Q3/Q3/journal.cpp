#include "journal.h"

Journal::Journal(QString authorP, int yearP, QString titleP, QString journalP, int volumeP, int issueP, int pagesP) :
    author(authorP), year(yearP), title(titleP), journal(journalP), volume(volumeP), issue(issueP), pages(pagesP)
{
}

QList<QStandardItem *> Journal::getQListQStandardItem()
{
    QList<QStandardItem *> lst;
    lst.append(new QStandardItem(this->author));
    lst.append(new QStandardItem(QString("%1").arg(this->year)));
    lst.append(new QStandardItem(this->title));
    lst.append(new QStandardItem(this->journal));
    lst.append(new QStandardItem(QString("%1").arg(this->volume)));
    lst.append(new QStandardItem(QString("%1").arg(this->issue)));
    lst.append(new QStandardItem(QString("%1").arg(this->pages)));
    return lst;
}

QStringList Journal::getQStdHeaderList()
{
    QStringList lst;
    lst.append(QString("Author"));
    lst.append(QString("Year"));
    lst.append(QString("Title"));
    lst.append(QString("Journal"));
    lst.append(QString("Volume"));
    lst.append(QString("Issue"));
    lst.append(QString("Pages"));
    return lst;
}
