#include "stringiofield.h"

StringIOField::StringIOField()
{
    stringField = new QLineEdit();
}

StringIOField::~StringIOField()
{
    delete stringField;
}

QVariant StringIOField::getValue()
{
    return stringField->text();
}

void StringIOField::setValue(QVariant value)
{
    stringField->setText(value.toString());
}

QWidget *StringIOField::getWidget()
{
    return stringField;
}

void StringIOField::clear()
{
    stringField->clear();
}
