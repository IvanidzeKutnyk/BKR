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
#include "ColorStyle/colorstylesheet.h"
#include <QDebug>
//Library END +++++++++++++++++++++++++++++++++++++++++++++++

class MainWidgetExample : public QWidget
{
    Q_OBJECT
public:
    explicit MainWidgetExample(QWidget *parent = nullptr);
    ~MainWidgetExample();
public:
    //ADV Widgets
    void Set_Memory_Adv();
    void AddWidgetAdvenced();
    //Simple Widgets
    void Set_Memory_Simp();
    void AddWidgetSimple();
    //Else
    void Add_Son(MainWidgetExample *);
    void ResizeLineEdit();
    void SimpleWidget();
    void AdvWidget();
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
private:
    QVector<MainWidgetExample *> _sons;
private slots:
    void TextChanged();
};

#endif // MAINWIDGETEXAMPLE_H
