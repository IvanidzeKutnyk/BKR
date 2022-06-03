/********************************************************************************
** Form generated from reading UI file 'add_newfile.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_NEWFILE_H
#define UI_ADD_NEWFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_add_newFile
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *TitleW;
    QHBoxLayout *horizontalLayout;
    QWidget *TitleLeftW;
    QGridLayout *gridLayout;
    QLabel *TitleTestL;
    QWidget *TitleRightW;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QWidget *ExitBW;
    QVBoxLayout *verticalLayout_2;
    QPushButton *ExitButtom;
    QSpacerItem *verticalSpacer;
    QWidget *MainW;
    QHBoxLayout *horizontalLayout_3;
    QWidget *LeftMainW;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_2;
    QWidget *LineLabelW;
    QVBoxLayout *verticalLayout_6;
    QLineEdit *NameFile;
    QLineEdit *FileWay;
    QSpacerItem *verticalSpacer_3;
    QWidget *ComboBoxW;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_4;
    QComboBox *comboBox;
    QSpacerItem *verticalSpacer_8;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer_5;
    QWidget *CreateButtonW;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer_6;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_7;

    void setupUi(QWidget *add_newFile)
    {
        if (add_newFile->objectName().isEmpty())
            add_newFile->setObjectName(QString::fromUtf8("add_newFile"));
        add_newFile->resize(450, 150);
        add_newFile->setMinimumSize(QSize(450, 150));
        add_newFile->setMaximumSize(QSize(450, 150));
        add_newFile->setStyleSheet(QString::fromUtf8("#add_newFile\n"
"{\n"
"	background-color: rgb(58, 61, 88);\n"
"}\n"
"#TitleW\n"
"{\n"
"	background-color: rgb(66, 70, 77); \n"
"}\n"
"QLabel\n"
"{\n"
"	 background-color: rgb(185,186,190);\n"
"     border-radius: 8px;\n"
"     font-weight: bold ;\n"
"	 font-size: 20px;\n"
"	 \n"
"}\n"
"QPushButton {\n"
"    background-color: rgb(185,186,190);\n"
"    border-radius: 5;\n"
"    padding: 3px;\n"
"    min-width: 9ex;\n"
"	font-weight: bold ;\n"
"	font-size: 20px;\n"
"    min-height: 2.5ex;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"   background-color: rgb(213,214,217);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    padding-left: 5px;\n"
"    padding-top: 5px;\n"
"    background-color: rgb(231,233,241);\n"
"}\n"
"QLineEdit\n"
"{\n"
"border-radius: 4px;\n"
"background-color: rgb(185,186,190);\n"
"font-weight: bold ;\n"
"font-size: 12px;\n"
"color: rgb(46, 51, 56);\n"
"padding-left: 10px;\n"
"padding-right: 10px\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"background-color: rgb(221, 223, 226);\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"b"
                        "ackground-color: rgb(215, 220, 226);\n"
"}\n"
"QComboBox\n"
"{\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    selection-background-color: #111;\n"
"    selection-color: #42464D;\n"
"	font-weight:700;\n"
"    color: white;\n"
"    background-color: #A5A6AC;\n"
"    border-style: solid;\n"
"    border: 1px solid #1e1e1e;\n"
"    border-radius: 5;\n"
"    padding: 1px 0px 1px 15px;\n"
"}\n"
"\n"
"\n"
"QComboBox:hover\n"
"{\n"
"    border: 1px solid #42464D;\n"
"	font-weight:700;\n"
"    color: white;\n"
"}\n"
"QComboBox:editable {\n"
"    background: red;\n"
"    color: pink;\n"
"font-weight:700;\n"
"}\n"
"\n"
"QComboBox:on\n"
"{\n"
"    padding-top: 0px;\n"
"    padding-left: 0px;\n"
"    color: white;\n"
"    background-color: #A5A6AC;\n"
"	font-weight:700;\n"
"    selection-background-color: #ffaa00;\n"
"}\n"
"\n"
"QComboBox:!on\n"
"{\n"
"    color: white;\n"
"	font-weight:700;\n"
"    background-color: #A5A6AC;\n"
"}\n"
"\n"
"QComboBox::drop-down\n"
"{\n"
"     subcontrol-"
                        "origin: padding;\n"
"     subcontrol-position: top right;\n"
"     width: 15px;\n"
"     color: white;\n"
"     border-left-width: 0px;\n"
"     border-left-color: darkgray;\n"
"     border-left-style: solid; /* just a single line */\n"
"     border-top-right-radius: 3px; /* same radius as the QComboBox */\n"
"     border-bottom-right-radius: 3px;\n"
"     padding-left: 5px;\n"
" }\n"
"\n"
"QComboBox::down-arrow\n"
"{\n"
"     image: url(:/icons/down_arrow.png);\n"
"     width: 7px;\n"
"     height: 5px;\n"
"}"));
        verticalLayout = new QVBoxLayout(add_newFile);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        TitleW = new QWidget(add_newFile);
        TitleW->setObjectName(QString::fromUtf8("TitleW"));
        TitleW->setMaximumSize(QSize(16777215, 50));
        horizontalLayout = new QHBoxLayout(TitleW);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        TitleLeftW = new QWidget(TitleW);
        TitleLeftW->setObjectName(QString::fromUtf8("TitleLeftW"));
        TitleLeftW->setMinimumSize(QSize(400, 0));
        TitleLeftW->setMaximumSize(QSize(400, 16777215));
        gridLayout = new QGridLayout(TitleLeftW);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        TitleTestL = new QLabel(TitleLeftW);
        TitleTestL->setObjectName(QString::fromUtf8("TitleTestL"));
        TitleTestL->setLayoutDirection(Qt::LeftToRight);
        TitleTestL->setStyleSheet(QString::fromUtf8(""));
        TitleTestL->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(TitleTestL, 0, 0, 1, 1);


        horizontalLayout->addWidget(TitleLeftW);

        TitleRightW = new QWidget(TitleW);
        TitleRightW->setObjectName(QString::fromUtf8("TitleRightW"));
        horizontalLayout_2 = new QHBoxLayout(TitleRightW);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(15, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        ExitBW = new QWidget(TitleRightW);
        ExitBW->setObjectName(QString::fromUtf8("ExitBW"));
        verticalLayout_2 = new QVBoxLayout(ExitBW);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 2, 2, 0);
        ExitButtom = new QPushButton(ExitBW);
        ExitButtom->setObjectName(QString::fromUtf8("ExitButtom"));
        ExitButtom->setMinimumSize(QSize(30, 20));
        ExitButtom->setMaximumSize(QSize(30, 20));

        verticalLayout_2->addWidget(ExitButtom);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_2->addWidget(ExitBW);


        horizontalLayout->addWidget(TitleRightW);


        verticalLayout->addWidget(TitleW);

        MainW = new QWidget(add_newFile);
        MainW->setObjectName(QString::fromUtf8("MainW"));
        horizontalLayout_3 = new QHBoxLayout(MainW);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        LeftMainW = new QWidget(MainW);
        LeftMainW->setObjectName(QString::fromUtf8("LeftMainW"));
        verticalLayout_3 = new QVBoxLayout(LeftMainW);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(6, 0, 0, 0);
        verticalSpacer_2 = new QSpacerItem(20, 14, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        LineLabelW = new QWidget(LeftMainW);
        LineLabelW->setObjectName(QString::fromUtf8("LineLabelW"));
        LineLabelW->setMinimumSize(QSize(0, 70));
        LineLabelW->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_6 = new QVBoxLayout(LineLabelW);
        verticalLayout_6->setSpacing(5);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 3, 0);
        NameFile = new QLineEdit(LineLabelW);
        NameFile->setObjectName(QString::fromUtf8("NameFile"));
        NameFile->setMinimumSize(QSize(0, 30));
        NameFile->setMaximumSize(QSize(16777215, 30));

        verticalLayout_6->addWidget(NameFile);

        FileWay = new QLineEdit(LineLabelW);
        FileWay->setObjectName(QString::fromUtf8("FileWay"));
        FileWay->setMinimumSize(QSize(0, 30));
        FileWay->setMaximumSize(QSize(16777215, 30));
        FileWay->setReadOnly(true);

        verticalLayout_6->addWidget(FileWay);


        verticalLayout_3->addWidget(LineLabelW);

        verticalSpacer_3 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);


        horizontalLayout_3->addWidget(LeftMainW);

        ComboBoxW = new QWidget(MainW);
        ComboBoxW->setObjectName(QString::fromUtf8("ComboBoxW"));
        ComboBoxW->setMinimumSize(QSize(75, 0));
        ComboBoxW->setMaximumSize(QSize(75, 16777215));
        verticalLayout_4 = new QVBoxLayout(ComboBoxW);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(3, 0, 3, 0);
        verticalSpacer_4 = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_4);

        comboBox = new QComboBox(ComboBoxW);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(0, 25));
        comboBox->setMaximumSize(QSize(16777215, 25));

        verticalLayout_4->addWidget(comboBox);

        verticalSpacer_8 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_8);

        pushButton_2 = new QPushButton(ComboBoxW);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(42, 16));
        pushButton_2->setMaximumSize(QSize(16777215, 20));
        pushButton_2->setStyleSheet(QString::fromUtf8("font-weight: bold ;\n"
"font-size: 15px;"));

        verticalLayout_4->addWidget(pushButton_2);

        verticalSpacer_5 = new QSpacerItem(20, 22, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_5);


        horizontalLayout_3->addWidget(ComboBoxW);

        CreateButtonW = new QWidget(MainW);
        CreateButtonW->setObjectName(QString::fromUtf8("CreateButtonW"));
        CreateButtonW->setMinimumSize(QSize(100, 0));
        CreateButtonW->setMaximumSize(QSize(100, 16777215));
        verticalLayout_5 = new QVBoxLayout(CreateButtonW);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(3, 0, 3, 0);
        verticalSpacer_6 = new QSpacerItem(20, 37, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_6);

        pushButton = new QPushButton(CreateButtonW);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(51, 19));
        pushButton->setMaximumSize(QSize(16777215, 25));

        verticalLayout_5->addWidget(pushButton);

        verticalSpacer_7 = new QSpacerItem(20, 37, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_7);


        horizontalLayout_3->addWidget(CreateButtonW);


        verticalLayout->addWidget(MainW);


        retranslateUi(add_newFile);

        QMetaObject::connectSlotsByName(add_newFile);
    } // setupUi

    void retranslateUi(QWidget *add_newFile)
    {
        add_newFile->setWindowTitle(QCoreApplication::translate("add_newFile", "Form", nullptr));
        TitleTestL->setText(QCoreApplication::translate("add_newFile", "\320\241reate a new file", nullptr));
        ExitButtom->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("add_newFile", "Choose", nullptr));
        pushButton->setText(QCoreApplication::translate("add_newFile", "Create", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_newFile: public Ui_add_newFile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_NEWFILE_H
