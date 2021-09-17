#include "readingmaterial.h"

ReadingMaterial::ReadingMaterial()
{
}

ReadingMaterial::ReadingMaterial(QString itemP, int quantityP, QString frequencyP) : Stock::Stock(itemP, quantityP), frequency(frequencyP)
{
}

QString ReadingMaterial::toString()
{
    return QString("%1, Frequency: %2").arg(Stock::toString()).arg(frequency);
}

QString ReadingMaterial::getFrequency() const
{
    return frequency;
}

void ReadingMaterial::setFrequency(const QString &value)
{
    frequency = value;
}

