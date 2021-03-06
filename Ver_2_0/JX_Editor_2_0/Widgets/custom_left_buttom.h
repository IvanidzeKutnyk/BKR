#ifndef CUSTOM_LEFT_BUTTOM_H
#define CUSTOM_LEFT_BUTTOM_H

//Library Start +++++++++++++++++++++++++++++++++++++++++++++
#include <QString>
#include <QEvent>
#include <QPainter>
#include <QWidget>
#include <QColor>
#include <QMouseEvent>
#include <QPropertyAnimation>
#include <QAbstractButton>
#include <QDebug>
#include <QFileInfo>
#include <QDateTime>
#include <QFileDialog>
#include "ColorStyle/colorstylesheet.h"
#include "WorkWithFile/workfile.h"
#include "PopUp/add_newfile.h"
//Library END +++++++++++++++++++++++++++++++++++++++++++++++


class Custom_Left_Buttom : public QWidget
{
    Q_OBJECT
public:
    Custom_Left_Buttom();
    Custom_Left_Buttom(bool _save, bool _open,bool _setting,bool _newfile);
    virtual QSize sizeHint() const override;

protected:
     virtual void paintEvent(QPaintEvent *) override;
     virtual void enterEvent(QEvent *) override;
     virtual void leaveEvent(QEvent *) override;
     virtual void mousePressEvent(QMouseEvent *) override;
     virtual void mouseReleaseEvent(QMouseEvent *) override;
protected:
     void SetMemory();
     QString Add_Image();
private:
    int _height;
    int _width;
    int _round;

    ColorStyleSheet * _color;
    WorkFile * _workfile;
    add_newFile *file;

    bool _open_bool;
    bool _save_bool;
    bool _sett_bool;
    bool _nfile_bool;
    bool _clicked;
    bool _mousein;
signals:
    void SendFileInfoAfterClick(WorkFile *);
public slots:
    void NewFileClick(QString _name,QString _way,QString _type);


};

#endif // CUSTOM_LEFT_BUTTOM_H
