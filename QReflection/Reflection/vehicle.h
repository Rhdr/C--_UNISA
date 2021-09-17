#ifndef VEHICLE_H
#define VEHICLE_H

#include <QObject>
#include <QString>
#include <QMetaProperty>

class Vehicle : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString model READ getModel WRITE setModel)
    Q_PROPERTY(int year READ getYear WRITE setYear)

public:
    Vehicle(QString modelP, int yearP);
    virtual QString toString() = 0;

    QString getModel() const;
    void setModel(const QString &value);

    int getYear() const;
    void setYear(int value);

protected:
    QString model;
    int year;
};

#endif // VEHICLE_H
