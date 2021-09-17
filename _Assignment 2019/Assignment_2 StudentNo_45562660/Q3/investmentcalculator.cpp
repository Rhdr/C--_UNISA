#include "investmentcalculator.h"

investmentCalculator::investmentCalculator(double initialAmountP, double rateP, int yearsP) :
    initialAmount(initialAmountP), rate(rateP), years(yearsP)
{
}

void investmentCalculator::startWorker(){
    double runningTotal = initialAmount;
    for (int y = 1; y <= years; y++){
        runningTotal += runningTotal * rate / 100;
        emit newInvestmentAmount(y, runningTotal);
        QThread::msleep(1000);
    }
    emit finished();
}
