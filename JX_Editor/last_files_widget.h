#ifndef LAST_FILES_WIDGET_H
#define LAST_FILES_WIDGET_H

#include <QEvent>
#include <QPainter>
#include <QWidget>
#include <QAbstractButton>
#include <QColor>
#include <QPropertyAnimation>
#include <QMouseEvent>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QSpacerItem>
class QPropertyAnimation;

class Last_Files_Widget : public QWidget
{
public:
    Last_Files_Widget();
    Last_Files_Widget(QString _name, QString _way, QString _time);
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
    void Set_File_Name(QString _name);
    void Set_File_Way(QString _way);
private:
    int _height;
    int _radius;

    bool _mouseEnt_Lev;
    bool _mouseCl;

    QString _file_name;
    QString _file_way;
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

};

#endif // LAST_FILES_WIDGET_H
