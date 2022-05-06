#include "custom_left_buttom.h"
// ----------50-----------
// --5-------40--------5--

Custom_Left_Buttom::Custom_Left_Buttom()
{
    this->_x = 5;
    this->_y = 5;
    this->_height = 40;
    this->_width = 40;
    this->_round = 10;
    this->_colorbackgroundrec = "#fff";
    this->_colorinputrec = "#2262C6";

    this->_Selected_Color_One = "#fff";
    this->_Selected_Color_Two = "#2262C6";

    this->_colorbackgroundrec_selected = "#FAFE46";
    this->_colorinputrec_selected = "#2262C6";
    this->setFixedSize(this->_width + 10, this->_height + 10);
}
Custom_Left_Buttom::Custom_Left_Buttom(bool _save, bool _open)
{
    this->_save_bool = _save;
    this->_open_bool = _open;
    this->_x = 5;
    this->_y = 5;
    this->_height = 40;
    this->_width = 40;
    this->_round = 10;
    this->_colorbackgroundrec = "#fff";
    this->_colorinputrec = "#2262C6";

    this->_Selected_Color_One = "#fff";
    this->_Selected_Color_Two = "#2262C6";

    this->_colorbackgroundrec_selected = "#FAFE46";
    this->_colorinputrec_selected = "#2262C6";
    this->setFixedSize(this->_width + 10, this->_height + 10);

}
void Custom_Left_Buttom::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing,true);
    //First Rect
    painter.setPen(this->_Selected_Color_One);
    painter.setBrush(this->_Selected_Color_One);
    painter.drawRoundedRect(QRectF(this->_x,
                                   this->_y,
                                   this->_height,
                                   this->_width),
                                   this->_round,
                                   this->_round);
    //Second Rect
    painter.setPen(this->_Selected_Color_Two);
    painter.setBrush(this->_Selected_Color_Two);
    painter.drawRoundedRect(QRectF(this->_x + 2,
                                   this->_y + 2,
                                   this->_height - 4,
                                   this->_width - 4),
                                   this->_round,
                                   this->_round);
    //qDebug()<<"Paint Event";
}
QSize Custom_Left_Buttom::sizeHint() const{
    return QSize(this->_height,this->_width);
}
void Custom_Left_Buttom::enterEvent(QEnterEvent *)
{
    this->_Selected_Color_One = this->_colorbackgroundrec_selected;
    this->_Selected_Color_Two = this->_colorinputrec_selected;
    update();
    //qDebug()<<"Selected;";
}
void Custom_Left_Buttom::leaveEvent(QEvent *)
{
    this->_Selected_Color_One = this->_colorbackgroundrec;
    this->_Selected_Color_Two = this->_colorinputrec;
    update();
    //qDebug()<<" NOT Selected;";
}
void Custom_Left_Buttom::mousePressEvent(QMouseEvent *)
{
    if(this->_save_bool == true && this->_open_bool == false)
    {
         qDebug()<<"Button SAVE pressed!";
    }
    else if(this->_save_bool == false && this->_open_bool == true)
    {
         qDebug()<<"Button OPEN pressed!";
    }
    else
    {
        qDebug()<<"Button ERROR!";
    }

}
