#include "custom_left_buttom.h"

Custom_Left_Buttom::Custom_Left_Buttom()
{

}

Custom_Left_Buttom::Custom_Left_Buttom(bool _save, bool _open, bool _setting,bool _newfile)
{
    this->_save_bool = _save;
    this->_open_bool = _open;
    this->_nfile_bool = _newfile;
    this->_sett_bool = _setting;
    this->_clicked = false;
    this->_mousein = false;
    this->_height = 50;
    this->_width = 50;
    this->_round = 10;

    SetMemory();


    this->setFixedSize(this->_width + 10, this->_height + 10);


}
void Custom_Left_Buttom::paintEvent(QPaintEvent *e)
{
    Q_UNUSED(e);
    //---------
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing,true);
    //Small Rect
    painter.setPen(_color->_colorbackgroundbigrecSelected);
    painter.setBrush(_color->_colorbackgroundbigrecSelected);
    painter.drawRoundedRect(QRectF(0 + this->_clicked,
                                   0 + this->_clicked,
                                   this->_height - this->_clicked,
                                   this->_width -  this->_clicked),
                                   this->_round + (this->_mousein * 2),
                                   this->_round + (this->_mousein * 2));
    if(this->Add_Image() == "")
    {
        //qDebug()<<"Buttons or Image Error";
    }
    else
    {
        QImage image(this->Add_Image());
        painter.drawImage(QRectF(((_width/2) - (image.width()/2)),((_height/2) - (image.height()/2)),image.width(),image.height()),image);
    }
}
//Return Size
QSize Custom_Left_Buttom::sizeHint() const{
    return QSize(this->_height,this->_width);
}
//Mouse Event
void Custom_Left_Buttom::enterEvent(QEvent *e)
{
    Q_UNUSED(e);
    //---------
    this->_mousein = true;
    _color->_colorbackgroundbigrecSelected = _color->_colorbackgroundbigrecEnter;
    this->Add_Image();
    update();
    //qDebug()<<"IN";
}
void Custom_Left_Buttom::leaveEvent(QEvent *e)
{
    Q_UNUSED(e);
    //---------
    this->_mousein = false;
    _color->_colorbackgroundbigrecSelected = _color->_colorbackgroundbigrecIdle;
    this->Add_Image();
    update();
    //qDebug()<<"OUT";
}
void Custom_Left_Buttom::mousePressEvent(QMouseEvent *e)
{
    Q_UNUSED(e);
    //---------
    _color->_colorbackgroundbigrecSelected = _color->_colorbackgroundbigrecPressed;
    this->_clicked = true;
    this->Add_Image();
    update();
    if(this->_open_bool == true)
    {
        this->_workfile->OpenFile();
        emit SendFileInfoAfterClick(_workfile);
    }
    else if(this->_sett_bool == true)
    {

    }
    else if(this->_nfile_bool == true)
    {
        file->show();
    }

}
void Custom_Left_Buttom::mouseReleaseEvent(QMouseEvent *e)
{
    Q_UNUSED(e);
    //---------
    _color->_colorbackgroundbigrecSelected = _color->_colorbackgroundbigrecEnter;
    this->_clicked = false;
    this->Add_Image();
    update();
}
//Set Memory
void Custom_Left_Buttom::SetMemory()
{
    this->_color = new ColorStyleSheet ();
    this->_workfile = new WorkFile();
    this->file = new  add_newFile();
    connect(file,&add_newFile::CreatingNewFile,this,&Custom_Left_Buttom::NewFileClick);
}
//Add Image
QString Custom_Left_Buttom::Add_Image()
{
    if(this->_open_bool == true) //OpenButton
    {
        if(this->_mousein == false)
        {
            return this->_color->_logoOpenButton_Idle;
        }
        else if(this->_mousein == true && this->_clicked == false)
        {
            return this->_color->_logoOpenButton_Enter;
        }
        else if(this->_mousein == true && this->_clicked == true)
        {
            return this->_color->_logoOpenButton_Pressed;
        }
    }
    else if(this->_save_bool == true) //SaveButton
    {
        if(this->_mousein == false)
        {
            return this->_color->_logoSaveButton_Idle;
        }
        else if(this->_mousein == true && this->_clicked == false)
        {
            return this->_color->_logoSaveButton_Enter;
        }
        else if(this->_mousein == true && this->_clicked == true)
        {
            return this->_color->_logoSaveButton_Pressed;
        }
    }
    else if(this->_nfile_bool == true)
    {
        if(this->_mousein == false)
        {
            return this->_color->_logonewfileButton_Idle;
        }
        else if(this->_mousein == true && this->_clicked == false)
        {
            return this->_color->_logonewfileButton_Enter;
        }
        else if(this->_mousein == true && this->_clicked == true)
        {
            return this->_color->_logonewfileButton_Pressed;
        }
    }
    else if(this->_sett_bool == true) //SettButton
    {
        if(this->_mousein == false)
        {
            return this->_color->_logoSettButton_Idle;
        }
        else if(this->_mousein == true && this->_clicked == false)
        {
            return this->_color->_logoSettButton_Enter;
        }
        else if(this->_mousein == true && this->_clicked == true)
        {
            return this->_color->_logoSettButton_Pressed;
        }
    }
    return "";
}
void Custom_Left_Buttom:: NewFileClick(QString _name,QString _way,QString _type)
{
    QString name = _way +"/"+ _name + _type;
     QFile file(name);
     if (file.open(QIODevice::ReadWrite))
     {
         } else
     {
         qDebug() << "file open error";
     }
     file.close();
     this->_workfile->SetFullFileWay(name);
     this->_workfile->readinfo();
     emit SendFileInfoAfterClick(_workfile);

}
