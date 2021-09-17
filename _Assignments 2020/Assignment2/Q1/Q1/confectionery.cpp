#include "confectionery.h"

Confectionery::Confectionery()
{
}

Confectionery::Confectionery(QString itemP, int quantityP, int weightP) : Stock::Stock(itemP, quantityP), weight(weightP)
{
}

QString Confectionery::toString()
{
    return QString("%1, Weight: %2").arg(Stock::toString()).arg(weight);
}

int Confectionery::getWeight() const
{
    return weight;
}

void Confectionery::setWeight(int value)
{
    weight = value;
}

