#-------------------------------------------------
#
# Project created by QtCreator 2020-02-04T22:01:46
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Q3
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    model.cpp \
    journal.cpp \
    customdelegate.cpp

HEADERS  += mainwindow.h \
    model.h \
    journal.h \
    customdelegate.h

FORMS    += \
    mainwindow.ui
