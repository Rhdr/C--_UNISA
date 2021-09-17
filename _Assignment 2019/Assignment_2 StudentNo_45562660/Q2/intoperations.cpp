#include "intoperations.h"

QVariant IntOperations::addition(QVariant x, QVariant y)
{
    return QVariant(x.toInt() + y.toInt());
}

QVariant IntOperations::subtraction(QVariant x, QVariant y)
{
    return QVariant(x.toInt() - y.toInt());
}
