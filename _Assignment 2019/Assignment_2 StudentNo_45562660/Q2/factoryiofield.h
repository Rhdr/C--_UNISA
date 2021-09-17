#ifndef FACTORYIOFIELD_H
#define FACTORYIOFIELD_H

#include <QObject>
#include "factoryiofieldabstract.h"
#include "intiofield.h"
#include "stringiofield.h"
#include "stringlistiofield.h"

class FactoryIOField : public FactoryIOFieldAbstract
{
public:
    static FactoryIOField* getInstance();
    IOField *createIOField(QString ioField);

private:
    explicit FactoryIOField();
    static FactoryIOField *onlyInstance;

};

#endif // FACTORYIOFIELD_H
