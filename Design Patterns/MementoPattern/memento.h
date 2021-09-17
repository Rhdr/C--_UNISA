#ifndef MEMENTO_H
#define MEMENTO_H

#include <QStringList>

class Memento
{
private:
    friend class Person;

    Memento();
    QStringList getState() const;
    void saveState(QStringList newStateLst);

    QStringList stateLst;
};

#endif // MEMENTO_H
