#-------------------------------------------------
#
# Project created by QtCreator 2020-06-13T21:00:50
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = StrategyAndFactoryComboPattern
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    strategyattack.cpp \
    strategyattacksaber.cpp \
    strategyattackforce.cpp \
    factoryabstract.cpp \
    factory.cpp

HEADERS += \
    strategyattacksaber.h \
    strategyattackforce.h \
    strategyattack.h \
    factoryabstract.h \
    factory.h
