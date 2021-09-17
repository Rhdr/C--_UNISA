#ifndef IOFIELD_H
#define IOFIELD_H

#include <QWidget>
#include <QVariant>

class IOField : public QWidget
{
    Q_OBJECT
public:
    explicit IOField();
    ~IOField();
    virtual QVariant getValue() = 0;
    virtual void setValue(QVariant) = 0;
    virtual QWidget *getWidget() = 0;
    virtual void clear() = 0;

};

#endif // IOFIELD_H
