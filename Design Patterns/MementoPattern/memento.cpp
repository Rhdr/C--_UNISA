#include "memento.h"

Memento::Memento()
{
}

void Memento::saveState(QStringList newStateLst)
{
    stateLst = newStateLst;
}

QStringList Memento::getState() const
{
    return stateLst;
}
