#-------------------------------------------------
#
# Project created by QtCreator 2020-06-16T22:48:52
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Concurrency
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    worker.cpp

HEADERS  += widget.h \
    worker.h

FORMS    += widget.ui
