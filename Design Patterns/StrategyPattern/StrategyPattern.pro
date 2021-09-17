#-------------------------------------------------
#
# Project created by QtCreator 2020-06-13T21:00:50
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = StrategyPattern
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    strategyattack.cpp \
    strategyattacksaber.cpp \
    strategyattackforce.cpp

HEADERS += \
    strategyattacksaber.h \
    strategyattackforce.h \
    strategyattack.h
