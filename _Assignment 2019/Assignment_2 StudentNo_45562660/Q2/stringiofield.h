#ifndef STRINGIOFIELD_H
#define STRINGIOFIELD_H

#include <QWidget>
#include<QLineEdit>
#include "iofield.h"

class StringIOField : public IOField
{
    Q_OBJECT
public:
    explicit StringIOField();
    ~StringIOField();
    QVariant getValue();
    void setValue(QVariant value);
    QWidget *getWidget();
    void clear();

private:
    QLineEdit *stringField;

};

#endif // STRINGIOFIELD_H
