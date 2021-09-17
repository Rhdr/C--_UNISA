#include "journal.h"

Journal::Journal(QString authorP, int yearP, QString titleP, QString journalP, int volumeP, int issueP, QString pagesP) :
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
    lst.append(new QStandardItem(this->pages));
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

QRegularExpressionValidator *Journal::getQRegularExpressionValidator_Author()
{
    QRegularExpression rx_author("^(([a-zA-Z]*)|([a-zA-Z]+)+(([ -][a-zA-Z]+)*))$");
    return new QRegularExpressionValidator(rx_author);
}

QRegularExpressionValidator *Journal::getQRegularExpressionValidator_TitleJournal()
{
    QRegularExpression rx_TitleJournal("^(((((\\b[a-zA-Z]+\\b)|(\\b[0-9]+\\b))( ))*)((\\b[a-zA-Z]+\\b)|(\\b[0-9]+\\b)))$");
    return new QRegularExpressionValidator(rx_TitleJournal);
}

QRegularExpressionValidator *Journal::getQRegularExpressionValidator_Pages()
{
    QRegularExpression rxPages("^((\\d+-\\d+)?|(\\d+ - \\d+))$");
    return new QRegularExpressionValidator(rxPages);
}
