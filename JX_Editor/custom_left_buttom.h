#ifndef CUSTOM_LEFT_BUTTOM_H
#define CUSTOM_LEFT_BUTTOM_H

#include <QEvent>
#include <QPainter>
#include <QWidget>
#include <QAbstractButton>
#include <QColor>
#include <QPropertyAnimation>
#include <QMouseEvent>
class QPropertyAnimation;


class Custom_Left_Buttom : public QWidget
{
public:
    Custom_Left_Buttom();
    Custom_Left_Buttom(bool _save, bool _open);
    virtual QSize sizeHint() const override;
protected:
     virtual void paintEvent(QPaintEvent *) override;
     virtual void enterEvent(QEnterEvent *event) override;
     virtual void leaveEvent(QEvent *) override;
     virtual void mousePressEvent(QMouseEvent *) override;
private:
    int _x;
    int _y;
    int _height;
    int _width;
    int _round;
    QColor _colorbackgroundrec;
    QColor _colorinputrec;

    QColor _colorbackgroundrec_selected;
    QColor _colorinputrec_selected;

    QColor _Selected_Color_One;
    QColor _Selected_Color_Two;

    bool _open_bool;
    bool _save_bool;
};

#endif // CUSTOM_LEFT_BUTTOM_H
