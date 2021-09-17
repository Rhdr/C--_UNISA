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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QLabel *lblList;
    QGroupBox *boxData;
    QGridLayout *gridLayout;
    QLabel *lblDate;
    QDateEdit *datDate;
    QLabel *lblName;
    QLineEdit *txtName;
    QLabel *lblEmployees;
    QLabel *lblCharitable;
    QCheckBox *chkCharitable;
    QSpinBox *spnEmployees;
    QGroupBox *boxCompanyType;
    QVBoxLayout *verticalLayout;
    QRadioButton *radProfit;
    QRadioButton *radNotProfit;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btnAdd;
    QPushButton *btnDelete;
    QSpacerItem *verticalSpacer;
    QListWidget *listWidget;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(662, 421);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        lblList = new QLabel(centralWidget);
        lblList->setObjectName(QStringLiteral("lblList"));

        gridLayout_2->addWidget(lblList, 2, 0, 1, 1);

        boxData = new QGroupBox(centralWidget);
        boxData->setObjectName(QStringLiteral("boxData"));
        gridLayout = new QGridLayout(boxData);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lblDate = new QLabel(boxData);
        lblDate->setObjectName(QStringLiteral("lblDate"));

        gridLayout->addWidget(lblDate, 1, 0, 1, 1);

        datDate = new QDateEdit(boxData);
        datDate->setObjectName(QStringLiteral("datDate"));

        gridLayout->addWidget(datDate, 1, 1, 1, 1);

        lblName = new QLabel(boxData);
        lblName->setObjectName(QStringLiteral("lblName"));

        gridLayout->addWidget(lblName, 0, 0, 1, 1);

        txtName = new QLineEdit(boxData);
        txtName->setObjectName(QStringLiteral("txtName"));

        gridLayout->addWidget(txtName, 0, 1, 1, 1);

        lblEmployees = new QLabel(boxData);
        lblEmployees->setObjectName(QStringLiteral("lblEmployees"));
        lblEmployees->setEnabled(false);

        gridLayout->addWidget(lblEmployees, 2, 0, 1, 1);

        lblCharitable = new QLabel(boxData);
        lblCharitable->setObjectName(QStringLiteral("lblCharitable"));
        lblCharitable->setEnabled(false);

        gridLayout->addWidget(lblCharitable, 3, 0, 1, 1);

        chkCharitable = new QCheckBox(boxData);
        chkCharitable->setObjectName(QStringLiteral("chkCharitable"));
        chkCharitable->setEnabled(false);

        gridLayout->addWidget(chkCharitable, 3, 1, 1, 1);

        spnEmployees = new QSpinBox(boxData);
        spnEmployees->setObjectName(QStringLiteral("spnEmployees"));
        spnEmployees->setEnabled(false);
        spnEmployees->setMaximum(99999999);

        gridLayout->addWidget(spnEmployees, 2, 1, 1, 1);


        gridLayout_2->addWidget(boxData, 0, 1, 1, 1);

        boxCompanyType = new QGroupBox(centralWidget);
        boxCompanyType->setObjectName(QStringLiteral("boxCompanyType"));
        verticalLayout = new QVBoxLayout(boxCompanyType);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        radProfit = new QRadioButton(boxCompanyType);
        radProfit->setObjectName(QStringLiteral("radProfit"));

        verticalLayout->addWidget(radProfit);

        radNotProfit = new QRadioButton(boxCompanyType);
        radNotProfit->setObjectName(QStringLiteral("radNotProfit"));

        verticalLayout->addWidget(radNotProfit);


        gridLayout_2->addWidget(boxCompanyType, 0, 0, 1, 1);

        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        btnAdd = new QPushButton(frame);
        btnAdd->setObjectName(QStringLiteral("btnAdd"));
        btnAdd->setEnabled(false);

        verticalLayout_2->addWidget(btnAdd);

        btnDelete = new QPushButton(frame);
        btnDelete->setObjectName(QStringLiteral("btnDelete"));
        btnDelete->setEnabled(false);

        verticalLayout_2->addWidget(btnDelete);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        gridLayout_2->addWidget(frame, 0, 2, 1, 1);

        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setAlternatingRowColors(true);
        listWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);

        gridLayout_2->addWidget(listWidget, 3, 0, 1, 3);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Company", 0));
        lblList->setText(QApplication::translate("MainWindow", "List of companies", 0));
        boxData->setTitle(QApplication::translate("MainWindow", "Enter company data", 0));
        lblDate->setText(QApplication::translate("MainWindow", "Date", 0));
        lblName->setText(QApplication::translate("MainWindow", "Name", 0));
        lblEmployees->setText(QApplication::translate("MainWindow", "Employees", 0));
        lblCharitable->setText(QApplication::translate("MainWindow", "Charitable?", 0));
        chkCharitable->setText(QString());
        boxCompanyType->setTitle(QApplication::translate("MainWindow", "Select a company type", 0));
        radProfit->setText(QApplication::translate("MainWindow", "For Profit", 0));
        radNotProfit->setText(QApplication::translate("MainWindow", "Not for Profit", 0));
        btnAdd->setText(QApplication::translate("MainWindow", "&Add company", 0));
        btnDelete->setText(QApplication::translate("MainWindow", "&Delete Selected Company", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
