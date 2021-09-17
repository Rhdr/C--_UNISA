#ifndef COMPANY_H
#define COMPANY_H

#include <QObject>
#include <QString>
#include <QDate>

class Company : public QObject
{
    Q_OBJECT
public:
    explicit Company(QObject *parent);
    explicit Company(QObject *parent, bool NPO_, QString name_, QDate date_);

    //getters & setters
    bool getNPO() const;
    void setNPO(bool value);
    QString getName() const;
    void setName(const QString &value);
    QDate getDate() const;
    void setDate(const QDate &value);
    virtual const QString toString() = 0;

signals:

public slots:

private:
    bool NPO;
    QString name;
    QDate date;


};

#endif // COMPANY_H
