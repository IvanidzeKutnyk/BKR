#include "custom_left_buttom.h"
// ----------50-----------
// --5-------40--------5--

Custom_Left_Buttom::Custom_Left_Buttom()
{

}
///
/// \brief Custom_Left_Buttom::Custom_Left_Buttom
/// \param _save
/// \param _open
///
Custom_Left_Buttom::Custom_Left_Buttom(bool _save, bool _open)
{
    this->_save_bool = _save;
    this->_open_bool = _open;
    this->_x = 0;
    this->_y = 0;
    this->_height = 40;
    this->_width = 40;
    this->_round = 10;
    //Color
    this->_colorbackgroundbigrecIdle = "#2262C6";
    this->_colorbackgroundsmallrecIdle = "#fff";

    this->_colorbackgroundbigrecSelected = this->_colorbackgroundbigrecIdle;
    this->_colorbackgroundsmallrecSelected = this->_colorbackgroundsmallrecIdle;


    this->_colorbackgroundbigrecPressed = "#458efc";
    this->_colorbackgroundsmallrecPressed = "#fff";

    this->_colorbackgroundbigrecEnter = "#377ae5";
    this->_colorbackgroundsmallrecEnter = "#fff";

    this->setFixedSize(this->_width + 10, this->_height + 10);

}
void Custom_Left_Buttom::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing,true);
    //Small Rect
    painter.setPen(this->_colorbackgroundsmallrecSelected);
    painter.setBrush(this->_colorbackgroundsmallrecSelected);
    painter.drawRoundedRect(QRectF(this->_x,
                                   this->_y,
                                   this->_height,
                                   this->_width),
                                   this->_round,
                                   this->_round);
    //Big Rect
    painter.setPen(this->_colorbackgroundbigrecSelected);
    painter.setBrush(this->_colorbackgroundbigrecSelected);
    painter.drawRoundedRect(QRectF(this->_x + 2,
                                   this->_y + 2,
                                   this->_height - 4,
                                   this->_width - 4),
                                   this->_round,
                                   this->_round);

    if(this->_open_bool)
    {
        this->_way_logo_buttons = ":/icons/OpenLogo.svg";
    }
    else
    {
         this->_way_logo_buttons = ":/icons/SaveLogo.svg";
    }
    QImage image(this->_way_logo_buttons);
    painter.drawImage(QRectF(((_width/2) - (image.width()/2)),((_height/2) - (image.height()/2)),image.width(),image.height()),image);

}
//Return Size
QSize Custom_Left_Buttom::sizeHint() const{
    return QSize(this->_height,this->_width);
}
//Mouse Event
void Custom_Left_Buttom::enterEvent(QEnterEvent *)
{
    this->_colorbackgroundbigrecSelected = this->_colorbackgroundbigrecEnter;
    this->_colorbackgroundsmallrecSelected = this->_colorbackgroundsmallrecEnter;
    update();
    qDebug()<<"IN";
}
void Custom_Left_Buttom::leaveEvent(QEvent *)
{
    this->_colorbackgroundbigrecSelected = this->_colorbackgroundbigrecIdle;
    this->_colorbackgroundsmallrecSelected = this->_colorbackgroundsmallrecIdle;
    update();
    qDebug()<<"OUT";
}
void Custom_Left_Buttom::mousePressEvent(QMouseEvent *)
{
     this->_colorbackgroundbigrecSelected = this->_colorbackgroundbigrecPressed;
     this->_colorbackgroundsmallrecSelected = this->_colorbackgroundsmallrecPressed;
     update();
    //Debug
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
void Custom_Left_Buttom::mouseReleaseEvent(QMouseEvent *)
{
    this->_colorbackgroundbigrecSelected = this->_colorbackgroundbigrecEnter;
    this->_colorbackgroundsmallrecSelected = this->_colorbackgroundsmallrecEnter;
    update();
}
