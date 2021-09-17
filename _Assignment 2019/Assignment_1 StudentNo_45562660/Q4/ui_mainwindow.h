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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QPushButton *btnBrowse;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QRadioButton *radEmpTypeText;
    QRadioButton *radEmpTypeDates;
    QLineEdit *txtSearch;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *radEmpAppearHighLight;
    QRadioButton *radEmpAppearBold;
    QRadioButton *radEmpAppearUnderline;
    QTextEdit *textEdit;
    QPushButton *btnApply;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 724);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        btnBrowse = new QPushButton(centralWidget);
        btnBrowse->setObjectName(QStringLiteral("btnBrowse"));

        gridLayout->addWidget(btnBrowse, 1, 0, 1, 2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 2, 1, 1);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        radEmpTypeText = new QRadioButton(groupBox_2);
        radEmpTypeText->setObjectName(QStringLiteral("radEmpTypeText"));

        gridLayout_2->addWidget(radEmpTypeText, 1, 0, 1, 1);

        radEmpTypeDates = new QRadioButton(groupBox_2);
        radEmpTypeDates->setObjectName(QStringLiteral("radEmpTypeDates"));
        radEmpTypeDates->setChecked(true);

        gridLayout_2->addWidget(radEmpTypeDates, 0, 0, 1, 1);

        txtSearch = new QLineEdit(groupBox_2);
        txtSearch->setObjectName(QStringLiteral("txtSearch"));
        txtSearch->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(txtSearch->sizePolicy().hasHeightForWidth());
        txtSearch->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(txtSearch, 1, 1, 1, 1);


        gridLayout->addWidget(groupBox_2, 3, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 2, 1, 1);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        radEmpAppearHighLight = new QRadioButton(groupBox);
        radEmpAppearHighLight->setObjectName(QStringLiteral("radEmpAppearHighLight"));
        radEmpAppearHighLight->setChecked(true);

        verticalLayout->addWidget(radEmpAppearHighLight);

        radEmpAppearBold = new QRadioButton(groupBox);
        radEmpAppearBold->setObjectName(QStringLiteral("radEmpAppearBold"));

        verticalLayout->addWidget(radEmpAppearBold);

        radEmpAppearUnderline = new QRadioButton(groupBox);
        radEmpAppearUnderline->setObjectName(QStringLiteral("radEmpAppearUnderline"));

        verticalLayout->addWidget(radEmpAppearUnderline);


        gridLayout->addWidget(groupBox, 4, 2, 1, 1);

        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        gridLayout->addWidget(textEdit, 2, 0, 5, 2);

        btnApply = new QPushButton(centralWidget);
        btnApply->setObjectName(QStringLiteral("btnApply"));

        gridLayout->addWidget(btnApply, 5, 2, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Q4 - Date Highlighter", 0));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", 0));
        btnBrowse->setText(QApplication::translate("MainWindow", "Browse for a Text File", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Emphasis Type", 0));
        radEmpTypeText->setText(QApplication::translate("MainWindow", "Text", 0));
        radEmpTypeDates->setText(QApplication::translate("MainWindow", "Dates", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Emphasis Appearance", 0));
        radEmpAppearHighLight->setText(QApplication::translate("MainWindow", "Highlight", 0));
        radEmpAppearBold->setText(QApplication::translate("MainWindow", "Bold", 0));
        radEmpAppearUnderline->setText(QApplication::translate("MainWindow", "Underline", 0));
        btnApply->setText(QApplication::translate("MainWindow", "Apply Emphasis", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
