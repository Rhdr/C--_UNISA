#include "confectionery.h"

Confectionery::Confectionery()
{
}

Confectionery::Confectionery(QString itemP, int quantityP, int weightP) :
    Stock::Stock(itemP, quantityP), weight(weightP)
{
}

QString Confectionery::toString()
{
    return QString("Confectionery: Item: %1, Quantity: %2, Weight: %3").arg(item)
                                                                       .arg(quantity)
                                                                       .arg(weight);
}

int Confectionery::getWeight() const
{
    return weight;
}

void Confectionery::setWeight(int value)
{
    weight = value;
}

