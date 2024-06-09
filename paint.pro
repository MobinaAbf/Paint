QT += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = paint
TEMPLATE = app

SOURCES += src/main.cpp \
           src/paint.cpp

HEADERS += include/paint.h
