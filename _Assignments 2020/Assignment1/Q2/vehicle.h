#ifndef VEHICLE_H
#define VEHICLE_H

#include <QObject>
#include <QString>
#include <QDate>

class Vehicle : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString model READ getModel WRITE setModel)
    Q_PROPERTY(int year READ getYear WRITE setYear)

public:
    Vehicle(QString vehicleModel="Generic", int vehicleYear=QDate::currentDate().year());
    virtual QString toString();

    QString getModel() const;
    void setModel(const QString &value);
    int getYear() const;
    void setYear(int value);

private:
    QString model;
    int year;
};

#endif // VEHICLE_H
