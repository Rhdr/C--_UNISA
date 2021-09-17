/********************************************************************************
** Form generated from reading UI file 'filmInput.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILMINPUT_H
#define UI_FILMINPUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FilmInput
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *txtTitle;
    QLabel *label_3;
    QSpinBox *spnDuration;
    QLineEdit *txtDirector;
    QDateEdit *dteRelease;
    QLabel *label_4;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnSave;
    QPushButton *btnLoad;
    QLabel *label_5;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *FilmInput)
    {
        if (FilmInput->objectName().isEmpty())
            FilmInput->setObjectName(QStringLiteral("FilmInput"));
        FilmInput->resize(370, 309);
        centralWidget = new QWidget(FilmInput);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        txtTitle = new QLineEdit(centralWidget);
        txtTitle->setObjectName(QStringLiteral("txtTitle"));

        gridLayout->addWidget(txtTitle, 1, 1, 1, 1);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        spnDuration = new QSpinBox(centralWidget);
        spnDuration->setObjectName(QStringLiteral("spnDuration"));
        spnDuration->setMaximum(999);

        gridLayout->addWidget(spnDuration, 2, 1, 1, 1);

        txtDirector = new QLineEdit(centralWidget);
        txtDirector->setObjectName(QStringLiteral("txtDirector"));

        gridLayout->addWidget(txtDirector, 3, 1, 1, 1);

        dteRelease = new QDateEdit(centralWidget);
        dteRelease->setObjectName(QStringLiteral("dteRelease"));

        gridLayout->addWidget(dteRelease, 4, 1, 1, 1);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnSave = new QPushButton(frame);
        btnSave->setObjectName(QStringLiteral("btnSave"));

        horizontalLayout->addWidget(btnSave);

        btnLoad = new QPushButton(frame);
        btnLoad->setObjectName(QStringLiteral("btnLoad"));

        horizontalLayout->addWidget(btnLoad);


        gridLayout->addWidget(frame, 5, 0, 1, 2);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 0, 0, 1, 2);

        FilmInput->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(FilmInput);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        FilmInput->setStatusBar(statusBar);

        retranslateUi(FilmInput);

        QMetaObject::connectSlotsByName(FilmInput);
    } // setupUi

    void retranslateUi(QMainWindow *FilmInput)
    {
        FilmInput->setWindowTitle(QApplication::translate("FilmInput", "MainWindow", 0));
        label->setText(QApplication::translate("FilmInput", "Title", 0));
        label_2->setText(QApplication::translate("FilmInput", "Duration(Minutes)", 0));
        label_3->setText(QApplication::translate("FilmInput", "Director", 0));
        label_4->setText(QApplication::translate("FilmInput", "Release date", 0));
        btnSave->setText(QApplication::translate("FilmInput", "Save", 0));
        btnLoad->setText(QApplication::translate("FilmInput", "Load", 0));
        label_5->setText(QApplication::translate("FilmInput", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600; color:#06023f;\">Film App</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class FilmInput: public Ui_FilmInput {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILMINPUT_H
