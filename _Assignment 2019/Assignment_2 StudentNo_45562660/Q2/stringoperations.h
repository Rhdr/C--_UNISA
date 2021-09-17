#ifndef STRINGOPERATIONS_H
#define STRINGOPERATIONS_H

#include "operations.h"

class StringOperations : public Operations
{
    Q_OBJECT

public:
    QVariant addition(QVariant x, QVariant y);
    QVariant subtraction(QVariant x, QVariant y);

private:
    QChar separator;
};

#endif // STRINGOPERATIONS_H
