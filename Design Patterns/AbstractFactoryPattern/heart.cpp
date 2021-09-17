#include "heart.h"

Heart::Heart(int hitpointsP, QObject *parent) :
    QObject(parent), hitpoints(hitpointsP)
{
    //
}

QString Heart::toString()
{
    return QString("Heart: Hitpoints: %1").arg(hitpoints);
}
