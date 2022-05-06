#include "last_files_widget.h"

Last_Files_Widget::Last_Files_Widget()
{
    this->_height = 70;
    this->_radius = 10;
    this->_backgroundColorEnter = "#2110ff";
    this->_backgroundColorPressed = "#3c80ff";
    this->_backgroundColorIdle = "#3c8033";
    this->_backgroundColorMainRec = this->_backgroundColorIdle;
    this->setFixedHeight(this->_height);
    this->Set_Memory();
    this->Set_Style();
    this->add_Widgets();
}
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
    this->_backgroundColorMainRec = this->_backgroundColorEnter;
    update();
    qDebug()<<"In";
}
void Last_Files_Widget::leaveEvent(QEvent *e)
{
    Q_UNUSED(e);
    this->_backgroundColorMainRec = this->_backgroundColorIdle;
    update();
    qDebug()<<"Out";
}
void Last_Files_Widget::mousePressEvent(QMouseEvent *e)
{
    Q_UNUSED(e);
    this->_backgroundColorMainRec = this->_backgroundColorPressed;
    update();
    qDebug()<<"Pressed";
}
void Last_Files_Widget::mouseReleaseEvent(QMouseEvent *e)
{
    Q_UNUSED(e);
    this->_backgroundColorMainRec = this->_backgroundColorEnter;
    update();
    qDebug()<<"UnPressed";
}
//File Information
void Last_Files_Widget::Set_File_Name(QString _name)
{
    this->_file_name = _name;
}
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
void Last_Files_Widget::Set_Style()
{
    this->_lastEditL->setText(" 05,05,05 ");
    this->_filenameL->setText("wouhfwiefowefgowegfwe");
    this->_filepathL->setText("wihfuwhfwhefiwhifhwiehfiwhefiwhefiwhefihweifhwilool");


    //Last_Edit
    this->_lastEditL->setStyleSheet("background-color:#3D76CE;border-radius: 5px;");
    //File_Name
    this->_filenameL->setStyleSheet("background-color:#3D76CE;border-radius: 5px;");
    this->_filenameL->setIndent(5);
    this->_filenameL->setAlignment(Qt::AlignLeft);
    //File_Way
    this->_filepathL->setStyleSheet("background-color:#3D76CE;border-radius: 5px;");
    this->_filepathL->setIndent(5);
    this->_filepathL->setAlignment(Qt::AlignLeft);
}
