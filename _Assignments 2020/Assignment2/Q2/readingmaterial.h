#ifndef READINGMATERIAL_H
#define READINGMATERIAL_H
#include "stock.h"

class ReadingMaterial : public Stock
{
    Q_OBJECT

public:
    ReadingMaterial();
    ReadingMaterial(QString itemP, int quantityP, QString frequencyP);
    QString toString();

    QString getFrequency() const;
    void setFrequency(const QString &value);

private:
    QString frequency;
};

#endif // READINGMATERIAL_H
