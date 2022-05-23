#ifndef MAINWIDGETEXAMPLE_H
#define MAINWIDGETEXAMPLE_H

//Library Start +++++++++++++++++++++++++++++++++++++++++++++
#include <QWidget>
#include <QLineEdit>
#include <QVector>
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QSpacerItem>
#include <QFont>
#include <QFontMetrics>
#include <QPainter>
#include <QEvent>
#include <QMouseEvent>
#include <QDebug>
#include "ColorStyle/colorstylesheet.h"
//Library END +++++++++++++++++++++++++++++++++++++++++++++++

class MainWidgetExample : public QWidget
{
    Q_OBJECT
public:
    explicit MainWidgetExample(QWidget *parent = nullptr);
    ~MainWidgetExample();
public:
    //Widgets
    void Set_Memory();
    void AddWidget();
    //Else
    void Add_Son(MainWidgetExample *);
    void ResizeLineEdit();
    //StyleSheet
    void SetStyleSheetSimple();
    //Test Function
    void TestSetText();

protected:
    //Widgets
    QWidget *_inputwidget;
    QWidget *_titlewidget;
    QWidget *_infowidget;
    //Linedit
    QLineEdit *_key;
    QLineEdit *_value;
    //Label
    QLabel *_label;
    ColorStyleSheet *_color;
protected:
     virtual void paintEvent(QPaintEvent *) override;
private:
    QVector<MainWidgetExample *> _sons;
    bool _fullWidget;
private slots:
    void TextChanged();
};

#endif // MAINWIDGETEXAMPLE_H
