QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    MainWidgetsLogic/mainwidgetcontrolmodule.cpp \
    WorkWithFile\analizejsonfile.cpp \
    ColorStyle\colorsylesheet.cpp \
    Widgets\custom_left_buttom.cpp \
    Widgets\last_files_widget.cpp \
    MainWidgetsLogic\advancedtypewidget.cpp \
    main.cpp \
    MainWidgetsLogic\mainwidgetexample.cpp \
    mainwindow.cpp \
    WorkWithFile\workfile.cpp \
    MainWidgetsLogic\singletypewidget.cpp

HEADERS += \
    MainWidgetsLogic/mainwidgetcontrolmodule.h \
    WorkWithFile\analizejsonfile.h \
    ColorStyle\colorsylesheet.h \
    Widgets\custom_left_buttom.h \
    Widgets\last_files_widget.h \
    MainWidgetsLogic\advancedtypewidget.h \
    MainWidgetsLogic\mainwidgetexample.h \
    mainwindow.h \
    WorkWithFile\workfile.h \
    MainWidgetsLogic\singletypewidget.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    SourseFile.qrc
