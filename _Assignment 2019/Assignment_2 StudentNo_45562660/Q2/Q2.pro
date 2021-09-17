#-------------------------------------------------
#
# Project created by QtCreator 2019-09-19T17:12:59
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Q2
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    operations.cpp \
    intoperations.cpp \
    stringoperations.cpp \
    stringlistoperations.cpp \
    iofield.cpp \
    intiofield.cpp \
    stringiofield.cpp \
    stringlistiofield.cpp \
    factoryoperations.cpp \
    factoryiofield.cpp \
    factoryiofieldabstract.cpp \
    factoryoperationsabstract.cpp

HEADERS  += mainwindow.h \
    operations.h \
    intoperations.h \
    stringoperations.h \
    stringlistoperations.h \
    iofield.h \
    intiofield.h \
    stringiofield.h \
    stringlistiofield.h \
    factoryoperations.h \
    factoryiofield.h \
    factoryiofieldabstract.h \
    factoryoperationsabstract.h

FORMS    += mainwindow.ui
