#ifndef PAINTFILEINFO_H
#define PAINTFILEINFO_H

//Library Start +++++++++++++++++++++++++++++++++++++++++++++
#include <QString>
#include <QPainter>
#include <QWidget>
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
     //virtual void paintEvent(QPaintEvent *) override;
private:
    ColorSyleSheet * _color;
};

#endif // PAINTFILEINFO_H
