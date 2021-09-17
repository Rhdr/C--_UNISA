#ifndef JOURNAL_H
#define JOURNAL_H

#include <QObject>
#include <QString>
#include <QList>
#include <QStringList>
#include <QStandardItem>

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
                        int pagesP);
    QList<QStandardItem *> getQListQStandardItem();
    static QStringList getQStdHeaderList();

private:
    QString author;
    int year;
    QString title;
    QString journal;
    int volume;
    int issue;
    int pages;

signals:

public slots:

};

#endif // JOURNAL_H
