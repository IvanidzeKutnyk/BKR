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
    //virtual QSize sizeHint() const override;
protected:
    virtual void paintEvent(QPaintEvent *) override;
    virtual void enterEvent(QEnterEvent *) override;
    virtual void leaveEvent(QEvent *) override;
    virtual void mousePressEvent(QMouseEvent *) override;
    virtual void mouseReleaseEvent(QMouseEvent *) override;
    void add_Widgets();
    void Set_Style();
    void Set_Memory();
    void Set_File_Name(QString _name);
    void Set_File_Way(QString _way);
private:
    int _height;
    int _radius;

    QString _file_name;
    QString _file_way;

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
