#-------------------------------------------------
#
# Project created by QtCreator 2020-06-09T23:25:19
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = FactoryPattern
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    entity.cpp \
    entity_landowner.cpp \
    entity_employee.cpp \
    entity_abstractfactory.cpp \
    entity_factory.cpp

HEADERS += \
    entity.h \
    entity_landowner.h \
    entity_employee.h \
    entity_abstractfactory.h \
    entity_factory.h
