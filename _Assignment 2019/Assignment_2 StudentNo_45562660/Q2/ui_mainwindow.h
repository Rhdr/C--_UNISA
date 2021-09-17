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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QPushButton *btnCalculate;
    QGroupBox *groupBoxOperation;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *radOprAdd;
    QRadioButton *radOprSub;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QRadioButton *radTypeStr;
    QRadioButton *radTypeLst;
    QRadioButton *radTypeInt;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QLabel *lblSpacerTop;
    QLabel *lblX;
    QFrame *line;
    QLabel *lblY;
    QLabel *lblSpacerBottom;
    QPushButton *btnClear;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(767, 523);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        btnCalculate = new QPushButton(centralWidget);
        btnCalculate->setObjectName(QStringLiteral("btnCalculate"));
        btnCalculate->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnCalculate->sizePolicy().hasHeightForWidth());
        btnCalculate->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnCalculate, 2, 2, 1, 1);

        groupBoxOperation = new QGroupBox(centralWidget);
        groupBoxOperation->setObjectName(QStringLiteral("groupBoxOperation"));
        groupBoxOperation->setEnabled(false);
        verticalLayout_4 = new QVBoxLayout(groupBoxOperation);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        radOprAdd = new QRadioButton(groupBoxOperation);
        radOprAdd->setObjectName(QStringLiteral("radOprAdd"));

        verticalLayout_4->addWidget(radOprAdd);

        radOprSub = new QRadioButton(groupBoxOperation);
        radOprSub->setObjectName(QStringLiteral("radOprSub"));

        verticalLayout_4->addWidget(radOprSub);


        gridLayout->addWidget(groupBoxOperation, 0, 3, 3, 1);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        radTypeStr = new QRadioButton(groupBox);
        radTypeStr->setObjectName(QStringLiteral("radTypeStr"));

        gridLayout_2->addWidget(radTypeStr, 2, 0, 1, 1);

        radTypeLst = new QRadioButton(groupBox);
        radTypeLst->setObjectName(QStringLiteral("radTypeLst"));

        gridLayout_2->addWidget(radTypeLst, 3, 0, 1, 1);

        radTypeInt = new QRadioButton(groupBox);
        radTypeInt->setObjectName(QStringLiteral("radTypeInt"));

        gridLayout_2->addWidget(radTypeInt, 1, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 3, 1);

        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lblSpacerTop = new QLabel(frame);
        lblSpacerTop->setObjectName(QStringLiteral("lblSpacerTop"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lblSpacerTop->sizePolicy().hasHeightForWidth());
        lblSpacerTop->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(lblSpacerTop);

        lblX = new QLabel(frame);
        lblX->setObjectName(QStringLiteral("lblX"));

        verticalLayout->addWidget(lblX);

        line = new QFrame(frame);
        line->setObjectName(QStringLiteral("line"));
        line->setLineWidth(0);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        lblY = new QLabel(frame);
        lblY->setObjectName(QStringLiteral("lblY"));

        verticalLayout->addWidget(lblY);

        lblSpacerBottom = new QLabel(frame);
        lblSpacerBottom->setObjectName(QStringLiteral("lblSpacerBottom"));
        sizePolicy1.setHeightForWidth(lblSpacerBottom->sizePolicy().hasHeightForWidth());
        lblSpacerBottom->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(lblSpacerBottom);


        gridLayout->addWidget(frame, 0, 2, 1, 1);

        btnClear = new QPushButton(centralWidget);
        btnClear->setObjectName(QStringLiteral("btnClear"));

        gridLayout->addWidget(btnClear, 1, 2, 1, 1);

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
        btnCalculate->setText(QApplication::translate("MainWindow", "Calculate", 0));
        groupBoxOperation->setTitle(QApplication::translate("MainWindow", "Choose Operation", 0));
        radOprAdd->setText(QApplication::translate("MainWindow", "Addition", 0));
        radOprSub->setText(QApplication::translate("MainWindow", "Subtraction", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Choose Type", 0));
        radTypeStr->setText(QApplication::translate("MainWindow", "String", 0));
        radTypeLst->setText(QApplication::translate("MainWindow", "List", 0));
        radTypeInt->setText(QApplication::translate("MainWindow", "Int", 0));
        lblSpacerTop->setText(QString());
        lblX->setText(QString());
        lblY->setText(QString());
        lblSpacerBottom->setText(QString());
        btnClear->setText(QApplication::translate("MainWindow", "Clear Data", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
