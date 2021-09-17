#include "worker.h"

Worker::Worker(int maxNumbersP, QObject *parent) :
    QObject(parent), maxNumbers(maxNumbersP)
{
    //
}

void Worker::startProducingNumbers()
{
    qsrand(QTime::currentTime().msec());
    for(int i = 0; i < maxNumbers; i++){
        emit nextRandomNumber(qrand());
        QThread::msleep(1000);
    }
    emit finished();
}
