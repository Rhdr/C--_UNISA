#include "stock.h"

Stock::Stock()
{
}

Stock::Stock(QString itemP, int quantityP) : item(itemP), quantity(quantityP)
{
    //
}
/*
QString Stock::toString()
{
    return QString("Item: %1, Quantity: %2").arg(item).arg(quantity);

}*/
QString Stock::getItem() const
{
    return item;
}

void Stock::setItem(const QString &value)
{
    item = value;
}
int Stock::getQuantity() const
{
    return quantity;
}

void Stock::setQuantity(int value)
{
    quantity = value;
}


