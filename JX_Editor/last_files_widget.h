#ifndef LAST_FILES_WIDGET_H
#define LAST_FILES_WIDGET_H

#include "All_Libr.h"
class QPropertyAnimation;

class Last_Files_Widget : public QWidget
{
public:
    Last_Files_Widget();
    Last_Files_Widget(QString _name, QString _way,QString _wayABS, QString _time);
    //virtual QSize sizeHint() const override;
protected:
    virtual void paintEvent(QPaintEvent *) override;
    virtual void enterEvent(QEnterEvent *) override;
    virtual void leaveEvent(QEvent *) override;
    virtual void mousePressEvent(QMouseEvent *) override;
    virtual void mouseReleaseEvent(QMouseEvent *) override;
    void Main_Functions();
    void add_Widgets();
    void Set_Style();
    void Set_Value();
    void Set_Memory();
private:
    int _height;
    int _radius;

    bool _mouseEnt_Lev;
    bool _mouseCl;

    QString _file_name;
    QString _file_way;
    QString _file_wayABS;
    QString _file_time_edit;

    QColor _backgroundColorMainRec;
    QColor _backgroundColorEnter;
    QColor _backgroundColorPressed;
    QColor _backgroundColorIdle;

    QFrame *_leftPartW;
    QWidget *_rightPartW;
    QWidget *_lastEditW;
    QLabel *_filenameL;
    QLabel *_filepathL;
    QLabel *_lastEditL;

signals:
    void LeftClick();

};

#endif // LAST_FILES_WIDGET_H
