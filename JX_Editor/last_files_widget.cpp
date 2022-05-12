#include "last_files_widget.h"

Last_Files_Widget::Last_Files_Widget()
{
    this->_height = 70;
    this->_radius = 10;
    this->_backgroundColorEnter = "#2110ff";
    this->_backgroundColorPressed = "#3c80ff";
    this->_backgroundColorIdle = "#7070ff";
    this->_backgroundColorMainRec = this->_backgroundColorIdle;
    this->setFixedHeight(this->_height);
    this->Set_Memory();
    this->Set_Style();
    this->add_Widgets();
}
///
/// \brief Last_Files_Widget::Last_Files_Widget
/// \param _name
/// \param _way
///
Last_Files_Widget::Last_Files_Widget(QString _name, QString _way, QString _time)
{
    this->_height = 70;
    this->_radius = 10;
    this->_backgroundColorEnter = "#94adff";
    this->_backgroundColorPressed = "#afc2ff";
    this->_backgroundColorIdle = "#7da0ff";
    this->_backgroundColorMainRec = this->_backgroundColorIdle;
    this->setFixedHeight(this->_height);
    this->_file_name = _name;
    this->_file_way = _way;
    this->_file_time_edit = _time;
    this->_mouseCl = false;
    this->_mouseEnt_Lev = false;
    this->Main_Functions();
}
//PaintFunction
void Last_Files_Widget::paintEvent(QPaintEvent *)
{

    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing,true);

    //BackGround
    painter.setPen(this->_backgroundColorMainRec);
    painter.setBrush(this->_backgroundColorMainRec);

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

}
//Mouse Event
void Last_Files_Widget::enterEvent(QEnterEvent *e)
{
    Q_UNUSED(e);
    this->_mouseEnt_Lev = true;
    this->Set_Style();
    this->_backgroundColorMainRec = this->_backgroundColorEnter;
    update();
    qDebug()<<"In";
}
void Last_Files_Widget::leaveEvent(QEvent *e)
{
    Q_UNUSED(e);
    this->_mouseEnt_Lev = false;
    this->Set_Style();
    this->_backgroundColorMainRec = this->_backgroundColorIdle;
    update();
    qDebug()<<"Out";
}
void Last_Files_Widget::mousePressEvent(QMouseEvent *e)
{
    Q_UNUSED(e);
    this->_mouseCl = true;
    this->Set_Style();
    this->_backgroundColorMainRec = this->_backgroundColorPressed;
    update();
    qDebug()<<"Pressed";
}
void Last_Files_Widget::mouseReleaseEvent(QMouseEvent *e)
{
    Q_UNUSED(e);
    this->_mouseCl = false;
    this->Set_Style();
    this->_backgroundColorMainRec = this->_backgroundColorEnter;
    update();
    qDebug()<<"UnPressed";
}

//File Information
///
/// \brief Last_Files_Widget::Set_File_Name
/// \param _name
///
void Last_Files_Widget::Set_File_Name(QString _name)
{
    this->_file_name = _name;
}
///
/// \brief Last_Files_Widget::Set_File_Way
/// \param _way
///
void Last_Files_Widget::Set_File_Way(QString _way)
{
    this->_file_way = _way;
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

     if(this->_mouseCl == true) // Mouse click in a4b7ef
    {
        //Last_Edit
        this->_lastEditL->setStyleSheet("background-color:#a7baf3;border-radius: 5px;");
        //File_Name
        this->_filenameL->setStyleSheet("background-color:#a7baf3;border-radius: 5px;");
        //File_Way
        this->_filepathL->setStyleSheet("background-color:#a7baf3;border-radius: 5px;");
    }
    else if(this->_mouseEnt_Lev == true) // Mouse in
    {
        //Last_Edit
        this->_lastEditL->setStyleSheet("background-color:#88a1eb;border-radius: 5px;");
        //File_Name
        this->_filenameL->setStyleSheet("background-color:#88a1eb;border-radius: 5px;");
        //File_Way
        this->_filepathL->setStyleSheet("background-color:#88a1eb;border-radius: 5px;");

    }
    else if(this->_mouseEnt_Lev == false) // Mouse out
    {
        //Last_Edit
        this->_lastEditL->setStyleSheet("background-color:#759aef;border-radius: 5px;");
        //File_Name
        this->_filenameL->setStyleSheet("background-color:#759aef;border-radius: 5px;");
        //File_Way
        this->_filepathL->setStyleSheet("background-color:#759aef;border-radius: 5px;");
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
