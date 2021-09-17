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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QSpinBox *spnCategory;
    QLabel *label_2;
    QLineEdit *txtFirstName;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *txtLastName;
    QLineEdit *txtStreetAddress;
    QLabel *label_6;
    QLineEdit *txtZipCode;
    QLineEdit *txtCity;
    QLabel *label_8;
    QLabel *label_7;
    QLineEdit *txtPhoneNr;
    QFrame *frame_3;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tabContact;
    QVBoxLayout *verticalLayout;
    QTableView *tableViewContact;
    QWidget *tabTelephone;
    QVBoxLayout *verticalLayout_2;
    QTableView *tableViewTelephone;
    QWidget *tabAddress;
    QVBoxLayout *verticalLayout_3;
    QTableView *tableViewAddress;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_9;
    QComboBox *cmbSelectCategory;
    QPushButton *btnShowAll;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAdd;
    QPushButton *btnDelete;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 772);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        spnCategory = new QSpinBox(centralwidget);
        spnCategory->setObjectName(QStringLiteral("spnCategory"));

        gridLayout_2->addWidget(spnCategory, 0, 1, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        txtFirstName = new QLineEdit(centralwidget);
        txtFirstName->setObjectName(QStringLiteral("txtFirstName"));

        gridLayout_2->addWidget(txtFirstName, 1, 1, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 4, 0, 1, 1);

        txtLastName = new QLineEdit(centralwidget);
        txtLastName->setObjectName(QStringLiteral("txtLastName"));

        gridLayout_2->addWidget(txtLastName, 2, 1, 1, 1);

        txtStreetAddress = new QLineEdit(centralwidget);
        txtStreetAddress->setObjectName(QStringLiteral("txtStreetAddress"));

        gridLayout_2->addWidget(txtStreetAddress, 3, 1, 1, 1);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_2->addWidget(label_6, 5, 0, 1, 1);

        txtZipCode = new QLineEdit(centralwidget);
        txtZipCode->setObjectName(QStringLiteral("txtZipCode"));

        gridLayout_2->addWidget(txtZipCode, 4, 1, 1, 1);

        txtCity = new QLineEdit(centralwidget);
        txtCity->setObjectName(QStringLiteral("txtCity"));

        gridLayout_2->addWidget(txtCity, 5, 1, 1, 1);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        QFont font;
        font.setPointSize(9);
        font.setBold(false);
        font.setWeight(50);
        label_8->setFont(font);

        gridLayout_2->addWidget(label_8, 8, 0, 1, 1);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 6, 0, 1, 1);

        txtPhoneNr = new QLineEdit(centralwidget);
        txtPhoneNr->setObjectName(QStringLiteral("txtPhoneNr"));

        gridLayout_2->addWidget(txtPhoneNr, 6, 1, 1, 1);

        frame_3 = new QFrame(centralwidget);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Sunken);
        gridLayout = new QGridLayout(frame_3);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tabWidget = new QTabWidget(frame_3);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabContact = new QWidget();
        tabContact->setObjectName(QStringLiteral("tabContact"));
        verticalLayout = new QVBoxLayout(tabContact);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableViewContact = new QTableView(tabContact);
        tableViewContact->setObjectName(QStringLiteral("tableViewContact"));
        tableViewContact->setAlternatingRowColors(true);
        tableViewContact->setSelectionMode(QAbstractItemView::ContiguousSelection);
        tableViewContact->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(tableViewContact);

        tabWidget->addTab(tabContact, QString());
        tabTelephone = new QWidget();
        tabTelephone->setObjectName(QStringLiteral("tabTelephone"));
        verticalLayout_2 = new QVBoxLayout(tabTelephone);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        tableViewTelephone = new QTableView(tabTelephone);
        tableViewTelephone->setObjectName(QStringLiteral("tableViewTelephone"));
        tableViewTelephone->setAlternatingRowColors(true);
        tableViewTelephone->setSelectionMode(QAbstractItemView::ContiguousSelection);
        tableViewTelephone->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_2->addWidget(tableViewTelephone);

        tabWidget->addTab(tabTelephone, QString());
        tabAddress = new QWidget();
        tabAddress->setObjectName(QStringLiteral("tabAddress"));
        verticalLayout_3 = new QVBoxLayout(tabAddress);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        tableViewAddress = new QTableView(tabAddress);
        tableViewAddress->setObjectName(QStringLiteral("tableViewAddress"));
        tableViewAddress->setAlternatingRowColors(true);
        tableViewAddress->setSelectionMode(QAbstractItemView::ContiguousSelection);
        tableViewAddress->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_3->addWidget(tableViewAddress);

        tabWidget->addTab(tabAddress, QString());

        gridLayout->addWidget(tabWidget, 1, 0, 1, 1);

        frame_2 = new QFrame(frame_3);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_9 = new QLabel(frame_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label_9);

        cmbSelectCategory = new QComboBox(frame_2);
        cmbSelectCategory->setObjectName(QStringLiteral("cmbSelectCategory"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cmbSelectCategory->sizePolicy().hasHeightForWidth());
        cmbSelectCategory->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(cmbSelectCategory);

        btnShowAll = new QPushButton(frame_2);
        btnShowAll->setObjectName(QStringLiteral("btnShowAll"));

        horizontalLayout_2->addWidget(btnShowAll);


        gridLayout->addWidget(frame_2, 0, 0, 1, 1);


        gridLayout_2->addWidget(frame_3, 9, 0, 1, 2);

        frame = new QFrame(centralwidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnAdd = new QPushButton(frame);
        btnAdd->setObjectName(QStringLiteral("btnAdd"));

        horizontalLayout->addWidget(btnAdd);

        btnDelete = new QPushButton(frame);
        btnDelete->setObjectName(QStringLiteral("btnDelete"));
        btnDelete->setEnabled(false);

        horizontalLayout->addWidget(btnDelete);


        gridLayout_2->addWidget(frame, 7, 0, 1, 2);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Contact List", 0));
        label->setText(QApplication::translate("MainWindow", "Category", 0));
        label_2->setText(QApplication::translate("MainWindow", "First Name", 0));
        label_3->setText(QApplication::translate("MainWindow", "Last Name", 0));
        label_4->setText(QApplication::translate("MainWindow", "Street Address", 0));
        label_5->setText(QApplication::translate("MainWindow", "Zip Code", 0));
        label_6->setText(QApplication::translate("MainWindow", "City", 0));
        label_8->setText(QApplication::translate("MainWindow", "Contacts:", 0));
        label_7->setText(QApplication::translate("MainWindow", "Phone Number", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabContact), QApplication::translate("MainWindow", "Contact List:", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabTelephone), QApplication::translate("MainWindow", "Telephone List:", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabAddress), QApplication::translate("MainWindow", "Address List", 0));
        label_9->setText(QApplication::translate("MainWindow", "Filter: Select a Category to display", 0));
        btnShowAll->setText(QApplication::translate("MainWindow", "Show All", 0));
        btnAdd->setText(QApplication::translate("MainWindow", "Add to List", 0));
        btnDelete->setText(QApplication::translate("MainWindow", "Delete Selected Contact", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
