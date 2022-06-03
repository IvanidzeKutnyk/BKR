#include "colorstylesheet.h"

ColorStyleSheet::ColorStyleSheet()
{
    // Custom_Left_Buttom
    this->_colorbackgroundbigrecIdle = "#3A3D58";
    this->_colorbackgroundbigrecSelected = this->_colorbackgroundbigrecIdle;
    this->_colorbackgroundbigrecPressed = "#AFB0BF";
    this->_colorbackgroundbigrecEnter = "#7B7D92";

    this->_logonewfileButton_Idle = ":/CustLeftButton/Icons/CustomLB/Logo_New_File_Idle.svg";
    this->_logonewfileButton_Enter = ":/CustLeftButton/Icons/CustomLB/Logo_New_File_Enter.svg";
    this->_logonewfileButton_Pressed = ":/CustLeftButton/Icons/CustomLB/Logo_New_File_Pressed.svg";

    this->_logoOpenButton_Idle = ":/CustLeftButton/Icons/CustomLB/OpenLogo_IDLE.svg";
    this->_logoOpenButton_Enter = ":/CustLeftButton/Icons/CustomLB/OpenLogo_ENTER.svg";
    this->_logoOpenButton_Pressed = ":/CustLeftButton/Icons/CustomLB/OpenLogo_PRESSED.svg";

    this->_logoSaveButton_Idle = ":/CustLeftButton/Icons/CustomLB/SaveLogo_IDLE.svg";
    this->_logoSaveButton_Enter = ":/CustLeftButton/Icons/CustomLB/SaveLogo_ENTER.svg";
    this->_logoSaveButton_Pressed = ":/CustLeftButton/Icons/CustomLB/SaveLogo_PRESSED.svg";

    this->_logoSettButton_Idle = ":/CustLeftButton/Icons/CustomLB/Icon_Info_Idle.svg";
    this->_logoSettButton_Enter = ":/CustLeftButton/Icons/CustomLB/Icon_Info_Enter.svg";
    this->_logoSettButton_Pressed = ":/CustLeftButton/Icons/CustomLB/Icon_Info_Pressed.svg";
    // Last_Files_Widget
    this->_backgroundColorEnter = "#898A93";
    this->_backgroundColorIdle = "#78797F";
    this->_backgroundColorActive = "#A5A6AC";
    this->_backgroundColorMainRec = this->_backgroundColorIdle;
    this->_mouseIdle = "background-color:#9D9FA8;border-radius: 5px;";
    this->_mouseEnter = "background-color:#B9BABE;border-radius: 5px;";
    this->_mouseActive = "background-color:#B9BABE;border-radius: 5px;";

    //Paintfileinfo
    this->_backgroundMainWidgets = "";
    this->_backgroundStringWidgets = "";
    this->_backgroundIntWidgets = "";
    this->_backgroundFloatWidgets = "";
    this->_backgroundMassiveWidgets = "";
    //MainWidgetExample
    this->_advancedsimplecolorIdle = "#2F3136";
    this->_simplecolorEnter = "#525355";
    this->_bordercolorObject = "#DE764C";
    this->_bordercolorMassive = "#DA63A1";
    this->_bordercolorSelected = "#2F3136";

    this->StyleSheetLineEditString = "#_label"
                                     "{"
                                          "color: rgb(255, 255, 255);"
                                     "}"
                                     "#_key"
                                     "{"
                                          "border-radius: 6px;"
                                          "background-color: rgb(66, 70, 77);"
                                          "color: rgb(156, 220, 254);"
                                          "padding-left: 10px;"
                                          "padding-right: 10px"
                                     "}"
                                     "#_value"
                                     "{"
                                          "border-radius: 6px;"
                                          "background-color: rgb(66, 70, 77);"
                                          "border-width: 1px;"
                                          "border-style: solid;"
                                          "border-color: rgb(222, 118, 76);"
                                          "color: rgb(222, 118, 76);"
                                          "padding-left: 10px;"
                                          "padding-right: 10px"
                                     "}";
    this->StyleSheetLineEditDouble = "#_label"
                                     "{"
                                           "color: rgb(255, 255, 255);"
                                     "}"
                                     "#_key"
                                     "{"
                                          "border-radius: 6px;"
                                          "background-color: rgb(66, 70, 77);"
                                          "color: rgb(156, 220, 254);"
                                          "padding-left: 10px;"
                                          "padding-right: 10px"
                                     "}"
                                     "#_value"
                                     "{"
                                          "border-radius: 6px;"
                                          "background-color: rgb(66, 70, 77);"
                                          "border-width: 1px;"
                                          "border-style: solid;"
                                          "border-color: rgb(151, 246, 101);"
                                          "color: rgb(151, 246, 101);"
                                          "padding-left: 10px;"
                                          "padding-right: 10px"
                                     "}";
    this->StyleSheetLineEditBool = "#_label"
                                   "{"
                                        "color: rgb(255, 255, 255);"
                                   "}"
                                   "#_key"
                                   "{"
                                        "border-radius: 6px;"
                                        "background-color: rgb(66, 70, 77);"
                                        "color: rgb(156, 220, 254);"
                                        "padding-left: 10px;"
                                        "padding-right: 10px"
                                   "}"
                                   "#_value"
                                   "{"
                                        "border-radius: 6px;"
                                        "background-color: rgb(66, 70, 77);"
                                        "border-width: 1px;"
                                        "border-style: solid;"
                                        "border-color: rgb(53, 140, 217);"
                                        "color: rgb(53, 140, 217);"
                                        "padding-left: 10px;"
                                        "padding-right: 10px"
                                   "}";
    this->StyleSheetLineEditObj = "#_key"
                                  "{"
                                       "border-radius: 6px;"
                                       "background-color: rgb(66, 70, 77);"
                                       "color: rgb(248, 248, 27);"
                                       "padding-left: 10px;"
                                       "padding-right: 10px"
                                  "}";
    this->StyleSheetLineEditMass = "#_key"
                                   "{"
                                        "border-radius: 6px;"
                                        "background-color: rgb(66, 70, 77);"
                                        "color: rgb(218, 99, 161);"
                                        "padding-left: 10px;"
                                        "padding-right: 10px"
                                   "}";
}
