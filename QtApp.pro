QT += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QtApp
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += main.cpp\
        mainwindow.cpp \
    database.cpp \
    configuration.cpp \
    login.cpp \
    querydialog.cpp \
    clientswindow.cpp \
    produitswindow.cpp \
    stockwindow.cpp \
    achatswindow.cpp \
    venteswindow.cpp \
    ventescrediteditwindow.cpp

HEADERS  += mainwindow.h \
    database.h \
    configuration.h \
    login.h \
    querydialog.h \
    clientswindow.h \
    produitswindow.h \
    stockwindow.h \
    achatswindow.h \
    venteswindow.h \
    ventescrediteditwindow.h

FORMS    += mainwindow.ui \
    login.ui \
    querydialog.ui \
    clientswindow.ui \
    produitswindow.ui \
    stockwindow.ui \
    achatswindow.ui \
    venteswindow.ui \
    ventescrediteditwindow.ui
