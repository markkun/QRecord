#-------------------------------------------------
#
# Project created by QtCreator 2015-08-21T13:55:57
#
#-------------------------------------------------

include (QZXing/QZXing.pri)

QT       += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QZXing
TEMPLATE = lib

DEFINES += QZXING_LIBRARY

SOURCES +=

HEADERS +=

unix {
    target.path = /usr/lib
    INSTALLS += target
}
