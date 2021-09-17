#include "readingmaterial.h"

ReadingMaterial::ReadingMaterial()
{
}

ReadingMaterial::ReadingMaterial(QString itemP, int quantityP, QString frequencyP) :
    Stock::Stock(itemP, quantityP), frequency(frequencyP)
{
}

QString ReadingMaterial::toString()
{
    return QString("ReadingMaterial: Item: %1, Quantity: %2, Frequency: %3").arg(item)
                                                                            .arg(quantity)
                                                                            .arg(frequency);
}

QString ReadingMaterial::getFrequency() const
{
    return frequency;
}

void ReadingMaterial::setFrequency(const QString &value)
{
    frequency = value;
}

