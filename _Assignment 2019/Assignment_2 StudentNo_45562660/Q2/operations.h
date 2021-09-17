#ifndef OPERATIONS_H
#define OPERATIONS_H

#include <QObject>
#include <QVariant>

class Operations : public QObject
{
    Q_OBJECT
public:
    virtual QVariant addition(QVariant x, QVariant y) = 0;
    virtual QVariant subtraction(QVariant x, QVariant y) = 0;

};

#endif // OPERATIONS_H
