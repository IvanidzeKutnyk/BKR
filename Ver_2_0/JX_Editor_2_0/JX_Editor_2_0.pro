QT       += core gui xml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ColorStyle\colorstylesheet.cpp \
    MainWidgetsLogic/xmladvancedobject.cpp \
    MainWidgetsLogic/xmlsimpleobject.cpp \
    PopUp/add_newfile.cpp \
    Widgets\custom_left_buttom.cpp \
    Widgets\last_files_widget.cpp \
    MainWidgetsLogic\advancedtypewidget.cpp \
    controlwidgetmodule.cpp \
    main.cpp \
    MainWidgetsLogic\mainwidgetexample.cpp \
    mainwindow.cpp \
    WorkWithFile\workfile.cpp \
    MainWidgetsLogic\singletypewidget.cpp

HEADERS += \
    ColorStyle\colorstylesheet.h \
    MainWidgetsLogic/xmladvancedobject.h \
    MainWidgetsLogic/xmlsimpleobject.h \
    PopUp/add_newfile.h \
    Widgets\custom_left_buttom.h \
    Widgets\last_files_widget.h \
    MainWidgetsLogic\advancedtypewidget.h \
    MainWidgetsLogic\mainwidgetexample.h \
    controlwidgetmodule.h \
    mainwindow.h \
    WorkWithFile\workfile.h \
    MainWidgetsLogic\singletypewidget.h

FORMS += \
    PopUp/add_newfile.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    SourseFile.qrc
