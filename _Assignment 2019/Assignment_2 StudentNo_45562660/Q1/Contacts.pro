QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
                                  QT += xml

TARGET = Contacts
TEMPLATE = app


SOURCES += main.cpp \
    contact.cpp \
    contactlist.cpp \
    mainwindow.cpp \
    categorylist.cpp \
    xmlserializer.cpp \
    xmlcontacthandler.cpp

HEADERS += contact.h \
    contactlist.h \
    mainwindow.h \
    categorylist.h \
    xmlserializer.h \
    xmlcontacthandler.h

FORMS += \
    mainwindow.ui

LIBS += -L$$(CPPLIBS) -ldataobjects
INCLUDEPATH += $$(CPPLIBS)/dataobjects
