#ifndef INVESTMENTCALCULATOR_H
#define INVESTMENTCALCULATOR_H

#include <QObject>
#include <QThread>

class investmentCalculator : public QObject
{
    Q_OBJECT
public:
    explicit investmentCalculator(double initialAmountP, double rateP, int yearsP);

signals:
    void finished();
    void newInvestmentAmount(int year, double amount);

public slots:
    void startWorker();

private:
    double initialAmount;
    double rate;
    int years;

};

#endif // INVESTMENTCALCULATOR_H
