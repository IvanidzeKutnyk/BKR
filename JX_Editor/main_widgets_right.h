#ifndef MAIN_WIDGETS_RIGHT_H
#define MAIN_WIDGETS_RIGHT_H


#include <QEvent>
#include <QPainter>
#include <QWidget>
#include <QAbstractButton>
#include <QColor>
#include <QPropertyAnimation>
#include <QMouseEvent>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QSpacerItem>
class QPropertyAnimation;

class Main_Widgets_Right : public QWidget
{
public:
    Main_Widgets_Right();
protected:
     virtual void paintEvent(QPaintEvent *) override;

private:

    QColor _backgroundColorMain;
    QColor _backgroundColorString;
    QColor _backgroundColorInt;
    QColor _backgroundColorDouble;

};

#endif // MAIN_WIDGETS_RIGHT_H
