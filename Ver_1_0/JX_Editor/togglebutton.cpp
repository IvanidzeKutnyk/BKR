#include "All_Libr.h"

///Standart const
ToggleButton::ToggleButton()
{
    this->_x = 8;
    this->_y = 4;

    this->_height = 67;
    this->_width = 34;

    this->_round = 5;

    this->_shift = 0;
    this->_up_down = false;

    this->_SelectedColorBackGroundRec = "#fff";
    this->_SelectedColorInRec = "#565";
}
//---------50---------
//-3-------34-------3-
void ToggleButton::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing,true);

    painter.setPen(this->_SelectedColorBackGroundRec);
    painter.setBrush(this->_SelectedColorBackGroundRec);
    painter.drawRoundedRect(QRectF(this->_x,
                                   this->_y,
                                   this->_width,
                                   this->_height),
                            this->_round,
                            this->_round);

    painter.setPen(this->_SelectedColorInRec);
    painter.setBrush(this->_SelectedColorInRec);
    painter.drawRoundedRect(QRectF(this->_x + 3,
                                   this->_y + 3  + this->_shift,
                                   this->_width - 6,
                                   (this->_height / 2) - 3),
                            this->_round,
                            this->_round);

}
QSize ToggleButton::sizeHint() const
{
    return QSize(this->_width,this->_height);
}

void ToggleButton::mousePressEvent(QMouseEvent *)
{
    if(this->_up_down == false)
    {
        this->_up_down = true;
        this->_shift = 31;
    }
    else
    {
        this->_up_down = false;
        this->_shift = 0;
    }
    update();
}
