#include "solo.h"

Solo* Solo::instance = NULL;

//public
Solo *Solo::getInstance()
{
    if (Solo::instance == NULL){
        return Solo::instance = new Solo();
    } else {
        return Solo::instance;
    }
}

//Private
Solo::Solo()
{
}

QString Solo::getY() const
{
    return y;
}

void Solo::setY(const QString &value)
{
    y = value;
}

QString Solo::getX() const
{
    return x;
}

void Solo::setX(const QString &value)
{
    x = value;
}

