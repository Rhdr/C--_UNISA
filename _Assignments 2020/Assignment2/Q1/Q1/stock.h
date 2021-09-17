#ifndef STOCK_H
#define STOCK_H
#include <QString>

class Stock
{
public:
    Stock();
    Stock(QString itemP, int quantityP);
    virtual QString toString() = 0;

    QString getItem() const;
    void setItem(const QString &value);

    int getQuantity() const;
    void setQuantity(int value);

protected:
    QString item;
    int quantity;
};

#endif // STOCK_H
