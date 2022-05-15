#include "last_files_widget.h"

Last_Files_Widget::Last_Files_Widget(){}
Last_Files_Widget::Last_Files_Widget(QString _name, QString _way,QString _wayABS, QString _time)
{
    this->_height = 70;
    this->_radius = 10;
    this->setFixedHeight(this->_height);
    this->_file_name = _name;
    this->_file_way = _way;
    this->_file_wayABS = _wayABS;
    this->_file_time_edit = _time;
    this->_mouseCl = false;
    this->_mouseEnt_Lev = false;
    this->_Active_Stat = false;
    this->Main_Functions();
    emit this->SendWidg(this);
}
//PaintFunction
void Last_Files_Widget::paintEvent(QPaintEvent *)
{

    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing,true);

    //BackGround
    painter.setPen(_color->_backgroundColorMainRec);
    painter.setBrush(_color->_backgroundColorMainRec);

    painter.drawRoundedRect(QRectF(0,
                                   0,
                                   this->width(),
                                   this->height()),
                            this->_radius,
                            this->_radius);


}
//SetMemory
void Last_Files_Widget::Set_Memory()
{
    //Widgets
    this->_leftPartW = new QFrame();
    this->_rightPartW = new QWidget();
    this->_lastEditW = new QWidget();
    //Label
    this->_filenameL = new QLabel();
    this->_filepathL = new QLabel();
    this->_lastEditL = new QLabel();
    this->_color = new ColorSyleSheet();

}
//Mouse Event
void Last_Files_Widget::enterEvent(QEvent *e)
{
    Q_UNUSED(e);
    if(this->_Active_Stat){}
    else
    {
        this->_mouseEnt_Lev = true;
        this->Set_Style();
        _color->_backgroundColorMainRec = _color->_backgroundColorEnter;
        update();
        //qDebug()<<"In";
    }
}
void Last_Files_Widget::leaveEvent(QEvent *e)
{
    Q_UNUSED(e);
    if(this->_Active_Stat){}
    else
    {
        this->_mouseEnt_Lev = false;
        this->Set_Style();
        _color->_backgroundColorMainRec = _color->_backgroundColorIdle;
        update();
        //qDebug()<<"Out";
    }
}
void Last_Files_Widget::mousePressEvent(QMouseEvent *e)
{
    if(this->_Active_Stat){}
    else
    {
    if(e->button() == Qt::LeftButton)
        {
            this->_mouseCl = true;
            this->Set_Style();
            _color->_backgroundColorMainRec = _color->_backgroundColorPressed;
            update();
            emit this->SendWidg(this);
        }
    }
}
void Last_Files_Widget::mouseReleaseEvent(QMouseEvent *e)
{
    Q_UNUSED(e);
    if(this->_Active_Stat){}
    else
    {
        this->_mouseCl = false;
        this->Set_Style();
        _color->_backgroundColorMainRec = _color->_backgroundColorEnter;
        update();
    }
}

//Widgets
void Last_Files_Widget::add_Widgets()
{
    this->setLayout(new QHBoxLayout());
    //Settings
        //Layout
            //Main Layout
    this->layout()->setSpacing(0);
    this->layout()->setContentsMargins(0,0,0,0);
            // Right Layout
    this->_rightPartW->setLayout(new QVBoxLayout());
    this->_rightPartW->layout()->setContentsMargins(6,6,6,6);
    this->_rightPartW->layout()->setSpacing(3);
            // LastEdit Layout
    this->_lastEditW->setLayout(new QHBoxLayout());
    this->_lastEditW->layout()->setContentsMargins(0,0,0,0);
            // Left Layout
    this->_leftPartW->setLayout(new QHBoxLayout());
        //Widgets
    this->_leftPartW->setFixedWidth(this->_height);

    //Adding
    this->layout()->addWidget(this->_leftPartW);
    this->layout()->addWidget(this->_rightPartW);
    this->_rightPartW->layout()->addWidget(this->_filenameL);
    this->_rightPartW->layout()->addWidget(this->_filepathL);
    this->_rightPartW->layout()->addWidget(this->_lastEditW);
    this->_lastEditW->layout()->addItem(new QSpacerItem(0,0,QSizePolicy::Expanding,QSizePolicy::Maximum));
    this->_lastEditW->layout()->addWidget(this->_lastEditL);
    this->_leftPartW->setStyleSheet("background-image: url(:/icons/FileIcon.svg);background-position: center;background-repeat: no-repeat;");

}
//Set StyleSheet
void Last_Files_Widget::Set_Style()
{
    this->_filenameL->setIndent(5);
    this->_filenameL->setAlignment(Qt::AlignLeft);
    this->_filepathL->setIndent(5);
    this->_filepathL->setAlignment(Qt::AlignLeft);
    this->_lastEditL->setIndent(5);
    this->_lastEditL->setAlignment(Qt::AlignCenter);

     if(this->_mouseCl == true) // Mouse click in
    {
        this->_lastEditL->setStyleSheet(_color->_mouseEnter);
        this->_filenameL->setStyleSheet(_color->_mouseEnter);
        this->_filepathL->setStyleSheet(_color->_mouseEnter);
    }
    else if(this->_mouseEnt_Lev == true) // Mouse in
    {
        this->_lastEditL->setStyleSheet(_color->_mouseIn);
        this->_filenameL->setStyleSheet(_color->_mouseIn);
        this->_filepathL->setStyleSheet(_color->_mouseIn);

    }
    else if(this->_mouseEnt_Lev == false) // Mouse out
    {
        this->_lastEditL->setStyleSheet(_color->_mouseIdle);
        this->_filenameL->setStyleSheet(_color->_mouseIdle);
        this->_filepathL->setStyleSheet(_color->_mouseIdle);
    }
}
//Set Value
void Last_Files_Widget::Set_Value()
{
    this->_lastEditL->setText(this->_file_time_edit);
    this->_filenameL->setText(this->_file_name);
    this->_filepathL->setText(this->_file_way);
}
//MainFunctions
void Last_Files_Widget::Main_Functions()
{
    this->Set_Memory();
    this->Set_Value();
    this->Set_Style();
    this->add_Widgets();
}
