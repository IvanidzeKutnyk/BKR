#ifndef TOGGLEBUTTON_H
#define TOGGLEBUTTON_H

//#include <QAbstractButton>

#include <QEvent>
#include <QPainter>
#include <QWidget>
#include <QAbstractButton>
#include <QColor>
#include <QPropertyAnimation>
#include <QMouseEvent>
class QPropertyAnimation;

class ToggleButton :public QWidget
{

public:
    ToggleButton();
     virtual QSize sizeHint() const override;
protected:
    virtual void paintEvent(QPaintEvent *) override;
     virtual void mousePressEvent(QMouseEvent *) override;

private:
    //Geometry
    int _x;
    int _y;
    int _width;
    int _height;
    int _round;

    int _shift;
    bool _up_down;

    QColor _SelectedColorBackGroundRec;
    QColor _SelectedColorInRec;

    QColor _DarkColorBackGroundRec;
    QColor _DarkColorInRec;

    QColor _LightColorBackGroundRec;
    QColor _LightColorInRec;

};

#endif // TOGGLEBUTTON_H
