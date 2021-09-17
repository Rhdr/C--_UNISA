#-------------------------------------------------
#
# Project created by QtCreator 2019-08-12T20:22:03
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Q1
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    company.cpp \
    companyprofit.cpp \
    companynonprofit.cpp \
    serializer.cpp

HEADERS  += mainwindow.h \
    company.h \
    companyprofit.h \
    companynonprofit.h \
    serializer.h

FORMS    += mainwindow.ui
