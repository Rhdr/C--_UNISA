#ifndef STRINGLISTIOFIELD_H
#define STRINGLISTIOFIELD_H

#include <QWidget>
#include <QComboBox>
#include "iofield.h"

class StringListIOField : public IOField
{
    Q_OBJECT
public:
    explicit StringListIOField();
    ~StringListIOField();
    QVariant getValue();
    void setValue(QVariant value);
    QWidget *getWidget();
    void clear();

private:
    QComboBox *stringListField;

};

#endif // STRINGLISTIOFIELD_H
