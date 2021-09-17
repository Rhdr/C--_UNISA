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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTableView *tableView;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QPushButton *btnRemove;
    QPushButton *btnAdd;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_2;
    QLineEdit *txtAuthor;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnFind;
    QPushButton *btnReset;
    QLabel *label;
    QLabel *label_6;
    QLineEdit *txtFind;
    QComboBox *cmbFind;
    QLineEdit *txtTitle;
    QSpinBox *spnVolume;
    QLineEdit *txtJournal;
    QSpinBox *spnYear;
    QSpinBox *spnIssue;
    QLineEdit *txtPages;
    QLabel *label_7;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(964, 497);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout->addWidget(tableView, 0, 1, 1, 1);

        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 9, 0, 1, 1);

        btnRemove = new QPushButton(frame);
        btnRemove->setObjectName(QStringLiteral("btnRemove"));

        gridLayout_2->addWidget(btnRemove, 8, 0, 1, 2);

        btnAdd = new QPushButton(frame);
        btnAdd->setObjectName(QStringLiteral("btnAdd"));

        gridLayout_2->addWidget(btnAdd, 7, 0, 1, 2);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        label_5 = new QLabel(frame);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 4, 0, 1, 1);

        label_4 = new QLabel(frame);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        txtAuthor = new QLineEdit(frame);
        txtAuthor->setObjectName(QStringLiteral("txtAuthor"));

        gridLayout_2->addWidget(txtAuthor, 0, 1, 1, 1);

        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnFind = new QPushButton(frame_2);
        btnFind->setObjectName(QStringLiteral("btnFind"));

        horizontalLayout->addWidget(btnFind);

        btnReset = new QPushButton(frame_2);
        btnReset->setObjectName(QStringLiteral("btnReset"));

        horizontalLayout->addWidget(btnReset);


        gridLayout_2->addWidget(frame_2, 12, 0, 1, 2);

        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        label_6 = new QLabel(frame);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_2->addWidget(label_6, 5, 0, 1, 1);

        txtFind = new QLineEdit(frame);
        txtFind->setObjectName(QStringLiteral("txtFind"));

        gridLayout_2->addWidget(txtFind, 10, 0, 1, 2);

        cmbFind = new QComboBox(frame);
        cmbFind->setObjectName(QStringLiteral("cmbFind"));

        gridLayout_2->addWidget(cmbFind, 11, 0, 1, 2);

        txtTitle = new QLineEdit(frame);
        txtTitle->setObjectName(QStringLiteral("txtTitle"));

        gridLayout_2->addWidget(txtTitle, 2, 1, 1, 1);

        spnVolume = new QSpinBox(frame);
        spnVolume->setObjectName(QStringLiteral("spnVolume"));

        gridLayout_2->addWidget(spnVolume, 4, 1, 1, 1);

        txtJournal = new QLineEdit(frame);
        txtJournal->setObjectName(QStringLiteral("txtJournal"));

        gridLayout_2->addWidget(txtJournal, 3, 1, 1, 1);

        spnYear = new QSpinBox(frame);
        spnYear->setObjectName(QStringLiteral("spnYear"));

        gridLayout_2->addWidget(spnYear, 1, 1, 1, 1);

        spnIssue = new QSpinBox(frame);
        spnIssue->setObjectName(QStringLiteral("spnIssue"));

        gridLayout_2->addWidget(spnIssue, 5, 1, 1, 1);

        txtPages = new QLineEdit(frame);
        txtPages->setObjectName(QStringLiteral("txtPages"));

        gridLayout_2->addWidget(txtPages, 6, 1, 1, 1);

        label_7 = new QLabel(frame);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 6, 0, 1, 1);


        gridLayout->addWidget(frame, 0, 0, 1, 1);

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
        btnRemove->setText(QApplication::translate("MainWindow", "Remove", 0));
        btnAdd->setText(QApplication::translate("MainWindow", "Add", 0));
        label_3->setText(QApplication::translate("MainWindow", "Title", 0));
        label_5->setText(QApplication::translate("MainWindow", "Volume", 0));
        label_4->setText(QApplication::translate("MainWindow", "Journal", 0));
        label_2->setText(QApplication::translate("MainWindow", "Year", 0));
        btnFind->setText(QApplication::translate("MainWindow", "Find", 0));
        btnReset->setText(QApplication::translate("MainWindow", "Reset", 0));
        label->setText(QApplication::translate("MainWindow", "Author", 0));
        label_6->setText(QApplication::translate("MainWindow", "Issue", 0));
        label_7->setText(QApplication::translate("MainWindow", "Pages", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
