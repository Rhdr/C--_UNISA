#ifndef SOLO_H
#define SOLO_H

#include <QString>

class Solo
{
public:
    static Solo* getInstance(); //3.static funciton to get instances
    //dont place a destructor (if the instance is deleted all pointers to it will be broken)

    QString getX() const;
    void setX(const QString &value);

    QString getY() const;
    void setY(const QString &value);

private:
    Solo();     //1.hide constructor
    static Solo* instance;  //2.private static instance
    QString x;
    QString y;
};

#endif // SOLO_H
