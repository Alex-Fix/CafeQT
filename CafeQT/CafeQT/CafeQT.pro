#-------------------------------------------------
#
# Project created by QtCreator 2019-04-21T10:29:19
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CafeQT
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainform.cpp \
    tableclass.cpp \
    menuclass.cpp \
    orderclass.cpp \
    cafeclass.cpp \
    neworderform.cpp \
    addtoorderform.cpp \
    infoaboutorderform.cpp \
    infoform.cpp \
    deleteorder.cpp \
    closeorderform.cpp

HEADERS += \
        mainform.h \
    tableclass.h \
    menuclass.h \
    orderclass.h \
    cafeclass.h \
    neworderform.h \
    addtoorderform.h \
    infoaboutorderform.h \
    infoform.h \
    deleteorder.h \
    closeorderform.h

FORMS += \
        mainform.ui \
    neworderform.ui \
    addtoorderform.ui \
    infoaboutorderform.ui \
    infoform.ui \
    deleteorder.ui \
    closeorderform.ui

RESOURCES += \
    resource.qrc

DISTFILES += \
    MenuDish.txt \
    MenuDrink.txt \
    MenuAlcoDrink.txt
