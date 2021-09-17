#ifndef JOURNAL_H
#define JOURNAL_H

#include <QObject>
#include <QString>
#include <QList>
#include <QStringList>
#include <QStandardItem>
#include <QRegularExpression>
#include <QRegularExpressionValidator>


class Journal : public QObject
{
    Q_OBJECT
public:
    explicit Journal(QString authorP,
                        int yearP,
                        QString titleP,
                        QString journalP,
                        int volumeP,
                        int issueP,
                        QString pagesP);
    QList<QStandardItem *> getQListQStandardItem();
    static QStringList getQStdHeaderList();

    static QRegularExpressionValidator *getQRegularExpressionValidator_Author();
    static QRegularExpressionValidator *getQRegularExpressionValidator_TitleJournal();
    static QRegularExpressionValidator *getQRegularExpressionValidator_Pages();

private:
    QString author;
    int year;
    QString title;  //^(((((\b[a-zA-Z]+\b)|(\b[0-9]+\b))( ))*)((\b[a-zA-Z]+\b)|(\b[0-9]+\b)))$
    QString journal;    //^(((((\b[a-zA-Z]+\b)|(\b[0-9]+\b))( ))*)((\b[a-zA-Z]+\b)|(\b[0-9]+\b)))$
    int volume;
    int issue;
    QString pages;  //^((\d+-\d+)|(\d+ - \d+))$

signals:

public slots:

};

#endif // JOURNAL_H
