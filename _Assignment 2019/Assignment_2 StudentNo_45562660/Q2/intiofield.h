#ifndef INTIOFIELD_H
#define INTIOFIELD_H

#include <QSpinBox>
#include "iofield.h"

class IntIOField : public IOField
{
    Q_OBJECT
public:
    explicit IntIOField();
    ~IntIOField();
    QVariant getValue();
    void setValue(QVariant value);
    QWidget *getWidget();
    void clear();

private:
    QSpinBox *intField;

};

#endif // INTIOFIELD_H
