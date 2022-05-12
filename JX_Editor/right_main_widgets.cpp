#include "right_main_widgets.h"

Right_Main_Widgets::Right_Main_Widgets()
{
    this->_height = 40;
    this->_round = 10;
}
void Right_Main_Widgets::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setPen(QColor("#1111"));
    painter.drawRoundedRect(QRect(0,
                                  0,
                                  this->width(),
                                  this->_height),
                            this->_round,
                            this->_round);
}
QSize Right_Main_Widgets::sizeHint() const
{
    return QSize(this->width(),this->_height);
}
void Right_Main_Widgets::addString(QString _name, QString _value)
{

}
