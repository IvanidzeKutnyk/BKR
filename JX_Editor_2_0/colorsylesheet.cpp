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
    this->_backgroundColorEnter = "#2110ff";
    this->_backgroundColorIdle = "#7070ff";
    this->_backgroundColorPressed = "#3c80ff";
    this->_backgroundColorMainRec = this->_backgroundColorIdle;
    this->_mouseIdle = "background-color:#759aef;border-radius: 5px;";
    this->_mouseEnter = "background-color:#a7baf3;border-radius: 5px;";
    this->_mouseIn = "background-color:#88a1eb;border-radius: 5px;";

}
