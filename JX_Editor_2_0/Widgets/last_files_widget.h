#ifndef LAST_FILES_WIDGET_H
#define LAST_FILES_WIDGET_H

//Library Start +++++++++++++++++++++++++++++++++++++++++++++
#include <QWidget>
#include <QString>
#include <QEvent>
#include <QMouseEvent>
#include <QFrame>
#include <QLabel>
#include <QPainter>
#include <QDebug>
#include <QHBoxLayout>
#include "ColorStyle/colorsylesheet.h"
//Library END +++++++++++++++++++++++++++++++++++++++++++++++

class Last_Files_Widget : public QWidget
{
    Q_OBJECT
public:
    Last_Files_Widget();
    Last_Files_Widget(QString _name, QString _way,QString _wayABS, QString _time);

    void SetActiveStatus();
    void SetDisActiveStatus();

    QString GetFullFileWay();
    bool GetStatus();
protected:
    virtual void paintEvent(QPaintEvent *) override;
    virtual void enterEvent(QEvent *) override;
    virtual void leaveEvent(QEvent *) override;
    virtual void mousePressEvent(QMouseEvent *) override;
    virtual void mouseReleaseEvent(QMouseEvent *) override;
    void Main_Functions();
    void add_Widgets();
    void Set_Style();
    void Set_Value();
    void Set_Memory();


    void ActiveStatusStyleSheet();
    void DisActiveStatusStyleSheet();
private:
    int _height;
    int _radius;

    bool _mouseEnt_Lev;
    bool _mouseCl;

    ColorSyleSheet *_color;

    QString _file_name;
    QString _file_way;
    QString _file_wayABS;
    QString _file_time_edit;

    QFrame *_leftPartW;
    QWidget *_rightPartW;
    QWidget *_lastEditW;
    QLabel *_filenameL;
    QLabel *_filepathL;
    QLabel *_lastEditL;
    bool _Active_Stat;
signals:
    void ClickToWidget(Last_Files_Widget *);
public slots:
};

#endif // LAST_FILES_WIDGET_H
