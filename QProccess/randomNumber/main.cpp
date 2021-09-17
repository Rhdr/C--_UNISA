#include <QCoreApplication>
#include <qDebug>
#include <QThread>
#include <QTextStream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QTextStream out(stdout);

    int counter = 0;
    while(counter<1000){
        out << counter << endl;
        QThread::msleep(1000);
        counter++;
    }

    return a.exec();
}



