#ifndef STRINGLISTOPERATIONS_H
#define STRINGLISTOPERATIONS_H

#include "operations.h"
#include "stringoperations.h"

class StringListOperations : public Operations
{
    Q_OBJECT

public:
    StringListOperations();
    QVariant addition(QVariant x, QVariant y);
    QVariant subtraction(QVariant x, QVariant y);

private:
    QChar separator;
};

#endif // STRINGLISTOPERATIONS_H
