#include "colorsylesheet.h"

ColorSyleSheet::ColorSyleSheet()
{
    // Custom_Left_Buttom
    this->_colorbackgroundbigrecIdle = "#3A3D58";
    this->_colorbackgroundbigrecSelected = this->_colorbackgroundbigrecIdle;
    this->_colorbackgroundbigrecPressed = "#AFB0BF";
    this->_colorbackgroundbigrecEnter = "#7B7D92";

    this->_logoOpenButton = "";
    this->_logoSaveButton = "";
    this->_logoSettButton = "";
    // Last_Files_Widget
    this->_backgroundColorEnter = "#A1A1F6";
    this->_backgroundColorIdle = "#7070FF";
    this->_backgroundColorPressed = "#C1C1F2";
    this->_backgroundColorMainRec = this->_backgroundColorIdle;
    this->_mouseIdle = "background-color:#9C9CF5;border-radius: 5px;";
    this->_mouseEnter = "background-color:#DBDBF6;border-radius: 5px;";
    this->_mouseIn = "background-color:#BEBEFF;border-radius: 5px;";

}
