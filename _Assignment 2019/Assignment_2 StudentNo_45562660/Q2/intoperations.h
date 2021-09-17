#ifndef INTOPERATIONS_H
#define INTOPERATIONS_H

#include "operations.h"

class IntOperations : public Operations
{
    Q_OBJECT
public:
    QVariant addition(QVariant x, QVariant y);
    QVariant subtraction(QVariant x, QVariant y);

};

#endif // INTOPERATIONS_H
