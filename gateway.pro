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

HEADERS += gateway_global.h \
    include/gateway.hpp

LIBS += "/usr/lib/libcgicc.so"

INCLUDEPATH += -L"/usr/include/cigcc"

unix {
    target.path = /appli/lib
    INSTALLS += target
}
