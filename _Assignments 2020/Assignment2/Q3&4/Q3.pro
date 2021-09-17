#-------------------------------------------------
#
# Project created by QtCreator 2020-03-02T21:59:29
#
#-------------------------------------------------

QT       += core xml

QT       -= gui

TARGET = Q3
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    stock.cpp \
    confectionery.cpp \
    readingmaterial.cpp \
    stockfactory.cpp \
    abstractstockfactory.cpp \
    stocklist.cpp \
    xmlstreamwriter.cpp \
    xmlstreamreader.cpp \
    saxhandler.cpp \
    saxreader.cpp

HEADERS += \
    stock.h \
    confectionery.h \
    readingmaterial.h \
    stockfactory.h \
    abstractstockfactory.h \
    stocklist.h \
    xmlstreamwriter.h \
    xmlstreamreader.h \
    saxhandler.h \
    saxreader.h
