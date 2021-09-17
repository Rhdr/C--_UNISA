#ifndef ARM_H
#define ARM_H

#include <QObject>

class Arm : public QObject
{
    Q_OBJECT
public:
    explicit Arm(int strengthP, QObject *parent = 0);
    virtual QString toString() = 0;

private:
    int strength;

};

#endif // ARM_H
