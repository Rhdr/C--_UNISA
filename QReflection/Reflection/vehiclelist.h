#ifndef VEHICLELIST_H
#define VEHICLELIST_H

#include <QList>
#include <QStringList>

class VehicleList : public QList
{
    Q_OBJECT
public:
    explicit VehicleList();
    QString toString();

};

#endif // VEHICLELIST_H
