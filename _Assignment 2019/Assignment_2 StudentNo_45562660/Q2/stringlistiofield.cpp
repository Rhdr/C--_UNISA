#include "stringlistiofield.h"

StringListIOField::StringListIOField()
{
    stringListField = new QComboBox();
    stringListField->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
    stringListField->setEditable(true);
}

StringListIOField::~StringListIOField()
{
    delete stringListField;
}

QVariant StringListIOField::getValue()
{
    QStringList retvalLst;
    for (int i = 0; i < stringListField->count(); i++){
        retvalLst.append(stringListField->itemText(i));
    }
    return QVariant(retvalLst);
}

void StringListIOField::setValue(QVariant value)
{
    stringListField->clear();
    QStringList strLst = value.toStringList();
    stringListField->addItems(strLst);
}

QWidget *StringListIOField::getWidget()
{
    return stringListField;
}

void StringListIOField::clear()
{
    stringListField->clear();
}
