#-------------------------------------------------
#
# Project created by QtCreator 2020-06-13T14:45:00
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = AbstractFactoryPattern
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    heart.cpp \
    arm.cpp \
    armorganic.cpp \
    heartorganic.cpp \
    heartrobotic.cpp \
    armrobotic.cpp \
    factoryabstract_humanoid.cpp \
    factory_humanoidorganic.cpp \
    factory_humanoidrobotic.cpp

HEADERS += \
    heart.h \
    arm.h \
    armorganic.h \
    heartorganic.h \
    heartrobotic.h \
    armrobotic.h \
    factoryabstract_humanoid.h \
    factory_humanoidorganic.h \
    factory_humanoidrobotic.h
