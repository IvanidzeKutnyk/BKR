#ifndef PAINTFILEINFO_H
#define PAINTFILEINFO_H

//Library Start +++++++++++++++++++++++++++++++++++++++++++++
#include <QString>
#include <QPainter>
#include <QWidget>
#include <QVBoxLayout>
#include <QLineEdit>
#include "colorsylesheet.h"
//Library END +++++++++++++++++++++++++++++++++++++++++++++++

class Paintfileinfo : public QWidget
{
public:
    Paintfileinfo();
public:
    //virtual QSize sizeHint() const override;
    void Set_Memory();
protected:
    void Add_Main_Widget();
private:
    ColorSyleSheet * _color;
    QVBoxLayout * _mainlayout;
};

#endif // PAINTFILEINFO_H
