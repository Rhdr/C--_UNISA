#include <QCoreApplication>
#include <QDebug>
#include "writer.h"
#include "reader.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QString path = "myFile.txt";

    Writer w(path);
    w.WriteToFile("Hello there! \nHow are you?");

    QString myString;
    Reader r(path);
    myString = r.readFile()            ;
    qDebug() << myString;

    return a.exec();
}
