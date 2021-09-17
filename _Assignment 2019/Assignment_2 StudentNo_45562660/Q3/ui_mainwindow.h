/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QDoubleSpinBox *dspnAmount;
    QLabel *label;
    QDoubleSpinBox *dspnRate;
    QLabel *label_2;
    QLabel *label_3;
    QTextEdit *textEdit;
    QPushButton *btnCalculate;
    QSpinBox *spnYears;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(377, 552);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        dspnAmount = new QDoubleSpinBox(centralWidget);
        dspnAmount->setObjectName(QStringLiteral("dspnAmount"));
        dspnAmount->setMaximum(1e+08);
        dspnAmount->setSingleStep(5000);
        dspnAmount->setValue(10000);

        gridLayout->addWidget(dspnAmount, 0, 1, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        dspnRate = new QDoubleSpinBox(centralWidget);
        dspnRate->setObjectName(QStringLiteral("dspnRate"));
        dspnRate->setSingleStep(0.25);
        dspnRate->setValue(10);

        gridLayout->addWidget(dspnRate, 1, 1, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setReadOnly(true);

        gridLayout->addWidget(textEdit, 4, 0, 1, 2);

        btnCalculate = new QPushButton(centralWidget);
        btnCalculate->setObjectName(QStringLiteral("btnCalculate"));

        gridLayout->addWidget(btnCalculate, 3, 0, 1, 2);

        spnYears = new QSpinBox(centralWidget);
        spnYears->setObjectName(QStringLiteral("spnYears"));
        spnYears->setValue(10);

        gridLayout->addWidget(spnYears, 2, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "No of Years", 0));
        label_2->setText(QApplication::translate("MainWindow", "Initail Investment Amount", 0));
        label_3->setText(QApplication::translate("MainWindow", "Intrest Rate", 0));
        btnCalculate->setText(QApplication::translate("MainWindow", "Calculate", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
