#ifndef COLORSYLESHEET_H
#define COLORSYLESHEET_H

//Library Start +++++++++++++++++++++++++++++++++++++++++++++
#include <QColor>
#include <QString>
//Library END +++++++++++++++++++++++++++++++++++++++++++++++

class ColorSyleSheet
{
public:
    ColorSyleSheet();
public:
    // Custom_Left_Buttom
    QColor _colorbackgroundbigrecPressed;
    QColor _colorbackgroundbigrecEnter;
    QColor _colorbackgroundbigrecIdle;
    QColor _colorbackgroundbigrecSelected;

    QString _logoOpenButton;
    QString _logoSaveButton;
    QString _logoSettButton;
    // Last_Files_Widget
    QColor _backgroundColorEnter;
    QColor _backgroundColorPressed;
    QColor _backgroundColorIdle;
    QColor _backgroundColorMainRec;
    QString _mouseEnter;
    QString _mouseIn;
    QString _mouseIdle;
    //Paintfileinfo
    QColor _backgroundMainWidgets;
    QColor _backgroundStringWidgets;
    QColor _backgroundIntWidgets;
    QColor _backgroundFloatWidgets;
    QColor _backgroundMassiveWidgets;

private:
};

#endif // COLORSYLESHEET_H
