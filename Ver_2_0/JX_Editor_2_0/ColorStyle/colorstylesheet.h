#ifndef COLORSTYLESHEET_H
#define COLORSTYLESHEET_H

//Library Start +++++++++++++++++++++++++++++++++++++++++++++
#include <QColor>
#include <QString>
//Library END +++++++++++++++++++++++++++++++++++++++++++++++

class ColorStyleSheet
{
public:
    ColorStyleSheet();
public:
    // Custom_Left_Buttom
    QColor _colorbackgroundbigrecPressed;
    QColor _colorbackgroundbigrecEnter;
    QColor _colorbackgroundbigrecIdle;
    QColor _colorbackgroundbigrecSelected;

    QString _logoOpenButton_Idle;
    QString _logoOpenButton_Enter;
    QString _logoOpenButton_Pressed;

    QString _logoSaveButton_Idle;
    QString _logoSaveButton_Enter;
    QString _logoSaveButton_Pressed;

    QString _logoSettButton_Idle;
    QString _logoSettButton_Enter;
    QString _logoSettButton_Pressed;

    // Last_Files_Widget
    QColor _backgroundColorEnter;
    QColor _backgroundColorIdle;
    QColor _backgroundColorMainRec;
    QColor _backgroundColorActive;
    QString _mouseEnter;
    QString _mouseActive;
    QString _mouseIdle;
    //Paintfileinfo
    QColor _backgroundMainWidgets;
    QColor _backgroundStringWidgets;
    QColor _backgroundIntWidgets;
    QColor _backgroundFloatWidgets;
    QColor _backgroundMassiveWidgets;
    //MainWidgetExample
    QString StyleSheetLineEditString;
    QString StyleSheetLineEditDouble;
    QString StyleSheetLineEditBool;
    QString StyleSheetLineEditObj;
    QString StyleSheetLineEditMass;
    QColor _bordercolorObject;
    QColor _bordercolorSelected;
    QColor _bordercolorMassive;

    QColor _advancedsimplecolorIdle;
    QColor _simplecolorEnter;

private:
};

#endif // COLORSTYLESHEET_H
