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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *txtComposer;
    QLineEdit *txtTitle;
    QDoubleSpinBox *dspnReplaceCost;
    QSpinBox *spnRating;
    QPushButton *btnAdd;
    QTableView *tableView;
    QPushButton *btnDel;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(604, 550);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 0, 3, 1, 1);

        txtComposer = new QLineEdit(centralWidget);
        txtComposer->setObjectName(QStringLiteral("txtComposer"));

        gridLayout->addWidget(txtComposer, 1, 0, 1, 1);

        txtTitle = new QLineEdit(centralWidget);
        txtTitle->setObjectName(QStringLiteral("txtTitle"));

        gridLayout->addWidget(txtTitle, 1, 1, 1, 1);

        dspnReplaceCost = new QDoubleSpinBox(centralWidget);
        dspnReplaceCost->setObjectName(QStringLiteral("dspnReplaceCost"));

        gridLayout->addWidget(dspnReplaceCost, 1, 2, 1, 1);

        spnRating = new QSpinBox(centralWidget);
        spnRating->setObjectName(QStringLiteral("spnRating"));

        gridLayout->addWidget(spnRating, 1, 3, 1, 1);

        btnAdd = new QPushButton(centralWidget);
        btnAdd->setObjectName(QStringLiteral("btnAdd"));

        gridLayout->addWidget(btnAdd, 1, 4, 1, 1);

        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout->addWidget(tableView, 2, 0, 1, 5);

        btnDel = new QPushButton(centralWidget);
        btnDel->setObjectName(QStringLiteral("btnDel"));

        gridLayout->addWidget(btnDel, 3, 4, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "Composer", 0));
        label_2->setText(QApplication::translate("MainWindow", "Album Title", 0));
        label_3->setText(QApplication::translate("MainWindow", "Replacement Cost", 0));
        label_4->setText(QApplication::translate("MainWindow", "Rating", 0));
        btnAdd->setText(QApplication::translate("MainWindow", "Add", 0));
        btnDel->setText(QApplication::translate("MainWindow", "Delete", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
