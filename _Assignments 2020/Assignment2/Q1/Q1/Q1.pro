#-------------------------------------------------
#
# Project created by QtCreator 2020-03-02T21:59:29
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = Q1
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    stock.cpp \
    confectionery.cpp \
    readingmaterial.cpp \
    stockfactory.cpp \
    abstractstockfactory.cpp

HEADERS += \
    stock.h \
    confectionery.h \
    readingmaterial.h \
    stockfactory.h \
    abstractstockfactory.h
