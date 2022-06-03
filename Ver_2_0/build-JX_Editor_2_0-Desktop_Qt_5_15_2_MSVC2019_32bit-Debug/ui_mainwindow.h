/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QWidget *LeftPartW;
    QVBoxLayout *verticalLayout;
    QWidget *LeftButtonsW;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QWidget *SettingsW;
    QGridLayout *gridLayout;
    QWidget *CentralPartW;
    QVBoxLayout *verticalLayout_3;
    QWidget *LogoW;
    QGridLayout *gridLayout_3;
    QWidget *MainLastFilesW;
    QVBoxLayout *verticalLayout_4;
    QWidget *LastFilesInW;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer_2;
    QWidget *ActiveFileW;
    QGridLayout *gridLayout_2;
    QWidget *RightPartW;
    QVBoxLayout *verticalLayout_6;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1257, 673);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("QLineEdit:hover\n"
"{\n"
"background-color: rgb(96, 98, 102);\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"background-color: rgb(124, 125, 126);\n"
"}\n"
"#LeftPartW\n"
"{\n"
"background-color: rgb(32, 34, 37);\n"
"}\n"
"#CentralPartW\n"
"{\n"
"background-color: rgb(41, 43, 47);\n"
"}\n"
"\n"
"#RightPartW\n"
"{\n"
"background-color: rgb(47, 49, 54);\n"
"}\n"
"#LogoW,#ActiveFileW\n"
"{\n"
"background-color: rgb(41, 43, 47);\n"
"}\n"
"QScrollBar:horizontal\n"
"    {\n"
"        height: 15px;\n"
"        margin: 3px 15px 3px 15px;\n"
"        border: 1px transparent #2A2929;\n"
"        border-radius: 4px;\n"
"        background-color: #2A2929;    /* #2A2929; */\n"
"    }\n"
"\n"
"    QScrollBar::handle:horizontal\n"
"    {\n"
"        background-color: #9D9FA8;  \n"
"        min-width: 5px;\n"
"        border-radius: 4px;\n"
"    }\n"
"\n"
"    QScrollBar::add-line:horizontal\n"
"    {\n"
"        margin: 0px 3px 0px 3px;\n"
"		\n"
"        border-image: url(:/images/right_arrow_disabled.png);      \n"
"        width: 10"
                        "px;\n"
"        height: 10px;\n"
"        subcontrol-position: right;\n"
"        subcontrol-origin: margin;\n"
"    }\n"
"\n"
"    QScrollBar::sub-line:horizontal\n"
"    {\n"
"        margin: 0px 3px 0px 3px;\n"
"        border-image: url(:/images/left_arrow_disabled.png);    \n"
"        height: 10px;\n"
"        width: 10px;\n"
"        subcontrol-position: left;\n"
"        subcontrol-origin: margin;\n"
"    }\n"
"\n"
"    QScrollBar::add-line:horizontal:hover,QScrollBar::add-line:horizontal:on\n"
"    {\n"
"        border-image: url(:/images/right_arrow.png);            \n"
"        height: 10px;\n"
"        width: 10px;\n"
"        subcontrol-position: right;\n"
"        subcontrol-origin: margin;\n"
"    }\n"
"\n"
"\n"
"    QScrollBar::sub-line:horizontal:hover, QScrollBar::sub-line:horizontal:on\n"
"    {\n"
"        border-image: url(:/images/left_arrow.png);               /* # &lt;-------- */\n"
"        height: 10px;\n"
"        width: 10px;\n"
"        subcontrol-position: left;\n"
"        subcon"
                        "trol-origin: margin;\n"
"    }\n"
"\n"
"    QScrollBar::up-arrow:horizontal, QScrollBar::down-arrow:horizontal\n"
"    {\n"
"        background: none;\n"
"    }\n"
"\n"
"\n"
"    QScrollBar::add-page:horizontal, QScrollBar::sub-page:horizontal\n"
"    {\n"
"        background: none;\n"
"    }\n"
"\n"
"    QScrollBar:vertical\n"
"    {\n"
"        background-color: #2A2929;\n"
"        width: 15px;\n"
"        margin: 15px 3px 15px 3px;\n"
"        border: 1px transparent #2A2929;\n"
"        border-radius: 4px;\n"
"    }\n"
"\n"
"    QScrollBar::handle:vertical\n"
"    {\n"
"        background-color: #9D9FA8;         /* #605F5F; */\n"
"        min-height: 5px;\n"
"        border-radius: 4px;\n"
"    }\n"
"\n"
"    QScrollBar::sub-line:vertical\n"
"    {\n"
"        margin: 3px 0px 3px 0px;\n"
"        border-image: url(:/images/up_arrow_disabled.png);        /* # &lt;-------- */\n"
"        height: 10px;\n"
"        width: 10px;\n"
"        subcontrol-position: top;\n"
"        subcontrol-origin: margin;\n"
" "
                        "   }\n"
"\n"
"    QScrollBar::add-line:vertical\n"
"    {\n"
"        margin: 3px 0px 3px 0px;\n"
"        border-image: url(:/images/down_arrow_disabled.png);       /* # &lt;-------- */\n"
"        height: 10px;\n"
"        width: 10px;\n"
"        subcontrol-position: bottom;\n"
"        subcontrol-origin: margin;\n"
"    }\n"
"\n"
"    QScrollBar::sub-line:vertical:hover,QScrollBar::sub-line:vertical:on\n"
"    {\n"
"        border-image: url(:/images/up_arrow.png);                  /* # &lt;-------- */\n"
"        height: 10px;\n"
"        width: 10px;\n"
"        subcontrol-position: top;\n"
"        subcontrol-origin: margin;\n"
"    }\n"
"\n"
"    QScrollBar::add-line:vertical:hover, QScrollBar::add-line:vertical:on\n"
"    {\n"
"        border-image: url(:/images/down_arrow.png);                /* # &lt;-------- */\n"
"        height: 10px;\n"
"        width: 10px;\n"
"        subcontrol-position: bottom;\n"
"        subcontrol-origin: margin;\n"
"    }\n"
"\n"
"    QScrollBar::up-arrow:vertical, QScro"
                        "llBar::down-arrow:vertical\n"
"    {\n"
"        background: none;\n"
"    }\n"
"\n"
"    QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical\n"
"    {\n"
"        background: none;\n"
"    }\n"
"\n"
"QAbstractScrollArea::corner {\n"
"    background: none;\n"
"    border: none;\n"
"}"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        LeftPartW = new QWidget(centralwidget);
        LeftPartW->setObjectName(QString::fromUtf8("LeftPartW"));
        LeftPartW->setMaximumSize(QSize(60, 16777215));
        LeftPartW->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(LeftPartW);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(2, 5, 0, 0);
        LeftButtonsW = new QWidget(LeftPartW);
        LeftButtonsW->setObjectName(QString::fromUtf8("LeftButtonsW"));
        verticalLayout_2 = new QVBoxLayout(LeftButtonsW);
        verticalLayout_2->setSpacing(5);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(3, 3, 3, 3);

        verticalLayout->addWidget(LeftButtonsW);

        verticalSpacer = new QSpacerItem(20, 646, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        SettingsW = new QWidget(LeftPartW);
        SettingsW->setObjectName(QString::fromUtf8("SettingsW"));
        gridLayout = new QGridLayout(SettingsW);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(3, 3, 3, 1);

        verticalLayout->addWidget(SettingsW);


        horizontalLayout->addWidget(LeftPartW);

        CentralPartW = new QWidget(centralwidget);
        CentralPartW->setObjectName(QString::fromUtf8("CentralPartW"));
        CentralPartW->setMinimumSize(QSize(300, 0));
        CentralPartW->setMaximumSize(QSize(300, 16777215));
        verticalLayout_3 = new QVBoxLayout(CentralPartW);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        LogoW = new QWidget(CentralPartW);
        LogoW->setObjectName(QString::fromUtf8("LogoW"));
        LogoW->setMinimumSize(QSize(0, 70));
        LogoW->setMaximumSize(QSize(16777215, 70));
        LogoW->setStyleSheet(QString::fromUtf8("background-image: url(:/iconsLogo/Icons/MainLogo.svg);\n"
"background-position: center;\n"
"background-repeat: no-repeat;"));
        gridLayout_3 = new QGridLayout(LogoW);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(0);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);

        verticalLayout_3->addWidget(LogoW);

        MainLastFilesW = new QWidget(CentralPartW);
        MainLastFilesW->setObjectName(QString::fromUtf8("MainLastFilesW"));
        verticalLayout_4 = new QVBoxLayout(MainLastFilesW);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        LastFilesInW = new QWidget(MainLastFilesW);
        LastFilesInW->setObjectName(QString::fromUtf8("LastFilesInW"));
        verticalLayout_5 = new QVBoxLayout(LastFilesInW);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));

        verticalLayout_4->addWidget(LastFilesInW);

        verticalSpacer_2 = new QSpacerItem(20, 512, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);


        verticalLayout_3->addWidget(MainLastFilesW);

        ActiveFileW = new QWidget(CentralPartW);
        ActiveFileW->setObjectName(QString::fromUtf8("ActiveFileW"));
        ActiveFileW->setMinimumSize(QSize(0, 20));
        ActiveFileW->setMaximumSize(QSize(16777215, 20));
        gridLayout_2 = new QGridLayout(ActiveFileW);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(0);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);

        verticalLayout_3->addWidget(ActiveFileW);


        horizontalLayout->addWidget(CentralPartW);

        RightPartW = new QWidget(centralwidget);
        RightPartW->setObjectName(QString::fromUtf8("RightPartW"));
        verticalLayout_6 = new QVBoxLayout(RightPartW);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);

        horizontalLayout->addWidget(RightPartW);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
