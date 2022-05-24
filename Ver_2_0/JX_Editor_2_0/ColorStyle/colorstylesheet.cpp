#include "colorstylesheet.h"

ColorStyleSheet::ColorStyleSheet()
{
    // Custom_Left_Buttom
    this->_colorbackgroundbigrecIdle = "#3A3D58";
    this->_colorbackgroundbigrecSelected = this->_colorbackgroundbigrecIdle;
    this->_colorbackgroundbigrecPressed = "#AFB0BF";
    this->_colorbackgroundbigrecEnter = "#7B7D92";

    this->_logoOpenButton_Idle = ":/CustLeftButton/Icons/CustomLB/OpenLogo_IDLE.svg";
    this->_logoOpenButton_Enter = ":/CustLeftButton/Icons/CustomLB/OpenLogo_ENTER.svg";
    this->_logoOpenButton_Pressed = ":/CustLeftButton/Icons/CustomLB/OpenLogo_PRESSED.svg";

    this->_logoSaveButton_Idle = ":/CustLeftButton/Icons/CustomLB/SaveLogo_IDLE.svg";
    this->_logoSaveButton_Enter = ":/CustLeftButton/Icons/CustomLB/SaveLogo_ENTER.svg";
    this->_logoSaveButton_Pressed = ":/CustLeftButton/Icons/CustomLB/SaveLogo_PRESSED.svg";

    this->_logoSettButton_Idle = ":/CustLeftButton/Icons/CustomLB/SettingsLogo_IDLE.svg";
    this->_logoSettButton_Enter = ":/CustLeftButton/Icons/CustomLB/SettingsLogo_ENTER.svg";
    this->_logoSettButton_Pressed = ":/CustLeftButton/Icons/CustomLB/SettingsLogo_PRESSED.svg";
    // Last_Files_Widget
    this->_backgroundColorEnter = "#A1A1F6";
    this->_backgroundColorIdle = "#7070FF";
    this->_backgroundColorPressed = "#C1C1F2";
    this->_backgroundColorMainRec = this->_backgroundColorIdle;
    this->_mouseIdle = "background-color:#9C9CF5;border-radius: 5px;";
    this->_mouseEnter = "background-color:#DBDBF6;border-radius: 5px;";
    this->_mouseIn = "background-color:#BEBEFF;border-radius: 5px;";
    //Paintfileinfo
    this->_backgroundMainWidgets = "";
    this->_backgroundStringWidgets = "";
    this->_backgroundIntWidgets = "";
    this->_backgroundFloatWidgets = "";
    this->_backgroundMassiveWidgets = "";
    //MainWidgetExample
    this->_bordercolordefault = "#000000";
    this->_colorbackgroundPressed = "#C1C1F2";
    this->_colorbackgroundEnter = "#A1A1F6";
    this->_colorbackgroundIdle = "#7070FF";
    this->_colorbackgroundSelected = this->_colorbackgroundIdle;
    //Elements
        //RootWidget
    this->_RootWidgetColor = "#C1C1F2";
        //Types
    this->_doubleType_Idle = "#91BA77";
    this->_doubleType_Enter = "#B1D999";

    this->_stringType_Idle = "#A48375";
    this->_stringType_Enter = "#C39F8F";

    this->_boolType_Idle = "#7FA5C8";
    this->_boolType_Enter = "#9AC0E3";

    this->_massiveType_Idle = "#CAB445";
    this->_massiveType_Enter = "#E7CF5A";

    this->_objectType_Idle = "#A57CC0";
    this->_objectType_Enter = "#B896CE";
    this->StyleSheetLineEdit = "QLineEdit"
                               "{"
                                    "border-radius: 4px;"
                                    "background-color: rgb(227, 229, 232);"
                                    "color: rgb(46, 51, 56);"
                                    "padding-left: 10px;"
                                    "padding-right: 10px"
                               "}"
                                "QLineEdit:hover"
                               "{"
                                "background-color: rgb(221, 223, 226);"
                               "}"
                               "QLineEdit:focus"
                               "{"
                                "background-color: rgb(215, 220, 226);"
                               "}";
}
