#ifndef WORKER_H
#define WORKER_H

#include <QObject>
#include <QTime>
#include <QThread>

class Worker : public QObject
{
    Q_OBJECT
public:
    explicit Worker(int maxNumbersP, QObject *parent = 0);

signals:
    void finished();
    void nextRandomNumber(int);

public slots:
    void startProducingNumbers();

private:
    int maxNumbers;
};

#endif // WORKER_H
