#ifndef HEART_H
#define HEART_H

#include <QObject>

class Heart : public QObject
{
    Q_OBJECT

public:
    explicit Heart(int hitpointsP, QObject *parent = 0);
    virtual QString toString() = 0;

private:
    int hitpoints;
};

#endif // HEART_H
