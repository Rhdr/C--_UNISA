#include "stringoperations.h"

QVariant StringOperations::addition(QVariant x, QVariant y)
{
    return QVariant(x.toString().toUpper() + y.toString().toUpper());
}

QVariant StringOperations::subtraction(QVariant x, QVariant y)
{
    return QVariant(x.toString().toUpper().remove(y.toString().toUpper()));
}
