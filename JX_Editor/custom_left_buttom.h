#ifndef CUSTOM_LEFT_BUTTOM_H
#define CUSTOM_LEFT_BUTTOM_H

#include <QEvent>
#include <QPainter>
#include <QWidget>
#include <QAbstractButton>
#include <QColor>
#include <QPropertyAnimation>
#include <QMouseEvent>
#include <QHBoxLayout>
#include <QFrame>
#include <QImage>
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
     virtual void mouseReleaseEvent(QMouseEvent *) override;

private:
    int _x;
    int _y;
    int _height;
    int _width;
    int _round;

    QColor _colorbackgroundbigrecPressed;
    QColor _colorbackgroundsmallrecPressed;

    QColor _colorbackgroundbigrecEnter;
    QColor _colorbackgroundsmallrecEnter;

    QColor _colorbackgroundbigrecIdle;
    QColor _colorbackgroundsmallrecIdle;

    QColor _colorbackgroundbigrecSelected;
    QColor _colorbackgroundsmallrecSelected;


    bool _open_bool;
    bool _save_bool;

    QString _way_logo_buttons;
};

#endif // CUSTOM_LEFT_BUTTOM_H
