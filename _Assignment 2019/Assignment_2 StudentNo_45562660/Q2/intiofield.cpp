#include "intiofield.h"

IntIOField::IntIOField()
{
    intField = new QSpinBox;
    intField->setMaximum(999999999);
    intField->setMinimum(-999999999);
    intField->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
}

IntIOField::~IntIOField()
{
    delete intField;
}

void IntIOField::setValue(QVariant value)
{
    intField->setValue(value.toInt());
}

QWidget *IntIOField::getWidget()
{
    return intField;
}

void IntIOField::clear()
{
    intField->setValue(0);
}

QVariant IntIOField::getValue()
{
    return intField->value();
}
