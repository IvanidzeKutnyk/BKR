QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    custom_left_buttom.cpp \
    last_files_widget.cpp \
    main.cpp \
    main_set.cpp \
    mainwindow.cpp \
    right_main_widgets.cpp \
    togglebutton.cpp

HEADERS += \
    All_Libr.h \
    custom_left_buttom.h \
    last_files_widget.h \
    main_set.h \
    mainwindow.h \
    right_main_widgets.h \
    togglebutton.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    File_Res.qrc
