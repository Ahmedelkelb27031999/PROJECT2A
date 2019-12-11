QT       += core gui
QT+= sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    achats.cpp \
    connect.cpp \
    d.cpp \
    d1.cpp \
    d2.cpp \
    d3.cpp \
    d4.cpp \
    d5.cpp \
    dialog.cpp \
    integration.cpp \
    main.cpp \
    mainwindow.cpp \
    searchresult.cpp \
    sponsor.cpp \
    windowachats.cpp \
    windowsponsor.cpp

HEADERS += \
    achats.h \
    connect.h \
    d.h \
    d1.h \
    d2.h \
    d3.h \
    d4.h \
    d5.h \
    dialog.h \
    integration.h \
    mainwindow.h \
    searchresult.h \
    sponsor.h \
    windowachats.h \
    windowsponsor.h

FORMS += \
    addachats.ui \
    d.ui \
    d1.ui \
    d2.ui \
    d3.ui \
    d4.ui \
    d5.ui \
    dialog.ui \
    integration.ui \
    mainwindow.ui \
    searchresult.ui \
    windowachats.ui \
    windowsponsor.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
