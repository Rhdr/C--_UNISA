#include "vehiclelist.h"

VehicleList::VehicleList()
{
}

QString VehicleList::toString()
{
    QStringList strLst;
    for(int i = 0; i < this->count(); i++)
        strLst.append(this->append(at(i)->toString());

    return strLst.join('\n');

}
