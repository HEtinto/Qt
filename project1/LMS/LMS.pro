QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    changeuser.cpp \
    database.cpp \
    dialog.cpp \
    dialogaddreader.cpp \
    dialogdelete.cpp \
    dialogloginerror.cpp \
    main.cpp \
    mainwindow.cpp \
    tipmessage.cpp

HEADERS += \
    changeuser.h \
    database.h \
    dialog.h \
    dialogaddreader.h \
    dialogdelete.h \
    dialogloginerror.h \
    mainwindow.h \
    tipmessage.h

FORMS += \
    changeuser.ui \
    dialog.ui \
    dialogaddreader.ui \
    dialogdelete.ui \
    dialogloginerror.ui \
    mainwindow.ui \
    tipmessage.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
