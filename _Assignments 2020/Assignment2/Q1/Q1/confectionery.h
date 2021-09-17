#ifndef CONFECTIONERY_H
#define CONFECTIONERY_H
#include "stock.h"

class Confectionery : public Stock
{
public:
    Confectionery();
    Confectionery(QString itemP, int quantityP, int weightP);
    QString toString();
    int getWeight() const;
    void setWeight(int value);

private:
    int weight;
};

#endif // CONFECTIONERY_H
