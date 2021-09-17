/********************************************************************************
** Form generated from reading UI file 'contactform.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTACTFORM_H
#define UI_CONTACTFORM_H

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
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Contacts
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QLabel *label_5;
    QSpinBox *spinBox;
    QLabel *label_8;
    QLabel *label_7;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_6;
    QLabel *label_6;
    QTableView *tableView;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_9;
    QComboBox *comboBox;
    QTableView *tableView_2;
    QTableView *tableView_3;
    QLabel *label_11;
    QLabel *label_10;
    QFrame *line;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Contacts)
    {
        if (Contacts->objectName().isEmpty())
            Contacts->setObjectName(QStringLiteral("Contacts"));
        Contacts->resize(800, 706);
        centralwidget = new QWidget(Contacts);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 1, 1, 1);

        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 2, 2, 1, 1);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 4, 1, 1, 1);

        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));

        gridLayout->addWidget(spinBox, 0, 2, 1, 1);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 10, 1, 1, 1);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 6, 1, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 1, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 1, 2, 1, 1);

        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        gridLayout->addWidget(lineEdit_3, 3, 2, 1, 1);

        lineEdit_5 = new QLineEdit(centralwidget);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        gridLayout->addWidget(lineEdit_5, 5, 2, 1, 1);

        lineEdit_4 = new QLineEdit(centralwidget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        gridLayout->addWidget(lineEdit_4, 4, 2, 1, 1);

        lineEdit_6 = new QLineEdit(centralwidget);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));

        gridLayout->addWidget(lineEdit_6, 6, 2, 1, 1);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 5, 1, 1, 1);

        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout->addWidget(tableView, 11, 1, 2, 2);

        frame = new QFrame(centralwidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        gridLayout->addWidget(frame, 7, 1, 1, 2);

        frame_2 = new QFrame(centralwidget);
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

        comboBox = new QComboBox(frame_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout_2->addWidget(comboBox);


        gridLayout->addWidget(frame_2, 9, 1, 1, 2);

        tableView_2 = new QTableView(centralwidget);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));

        gridLayout->addWidget(tableView_2, 14, 1, 1, 2);

        tableView_3 = new QTableView(centralwidget);
        tableView_3->setObjectName(QStringLiteral("tableView_3"));

        gridLayout->addWidget(tableView_3, 16, 1, 1, 2);

        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout->addWidget(label_11, 15, 1, 1, 1);

        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 13, 1, 1, 1);

        line = new QFrame(centralwidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 8, 1, 1, 2);

        Contacts->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Contacts);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Contacts->setStatusBar(statusbar);

        retranslateUi(Contacts);

        QMetaObject::connectSlotsByName(Contacts);
    } // setupUi

    void retranslateUi(QMainWindow *Contacts)
    {
        Contacts->setWindowTitle(QApplication::translate("Contacts", "MainWindow", 0));
        label_4->setText(QApplication::translate("Contacts", "Street Address", 0));
        label_5->setText(QApplication::translate("Contacts", "Zip Code", 0));
        label_8->setText(QApplication::translate("Contacts", "Contact List:", 0));
        label_7->setText(QApplication::translate("Contacts", "Phone Number", 0));
        label_3->setText(QApplication::translate("Contacts", "Last Name", 0));
        label->setText(QApplication::translate("Contacts", "Category", 0));
        label_2->setText(QApplication::translate("Contacts", "First Name", 0));
        label_6->setText(QApplication::translate("Contacts", "City", 0));
        pushButton_2->setText(QApplication::translate("Contacts", "Add to List", 0));
        pushButton->setText(QApplication::translate("Contacts", "Delete Selected Contact", 0));
        label_9->setText(QApplication::translate("Contacts", "Show Category", 0));
        label_11->setText(QApplication::translate("Contacts", "Adress List:", 0));
        label_10->setText(QApplication::translate("Contacts", "Telephone List:", 0));
    } // retranslateUi

};

namespace Ui {
    class Contacts: public Ui_Contacts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTACTFORM_H
