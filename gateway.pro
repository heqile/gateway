#-------------------------------------------------
#
# Project created by QtCreator 2016-11-18T20:14:16
#
#-------------------------------------------------

QT       -= gui

TARGET = gateway
TEMPLATE = lib

DEFINES += GATEWAY_LIBRARY

SOURCES += src/gateway.cpp

HEADERS += include/gateway.hpp \
    src/gateway_private.hpp

LIBS += "/usr/lib/libcgicc.so"

INCLUDEPATH += "/usr/include/cgicc"

unix {
    target.path = /appli/lib
    INSTALLS += target
}
