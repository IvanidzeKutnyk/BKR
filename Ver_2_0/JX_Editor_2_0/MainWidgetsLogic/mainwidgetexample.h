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
#include <QFile>
#include <QJsonDocument>
#include <QDebug>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonValue>
#include <string>
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
    void SetFullWidget(bool);
    void LoadObject(QJsonObject);
    void SetRound(int);

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
    virtual void enterEvent(QEvent *) override;
    virtual void leaveEvent(QEvent *) override;
    virtual void mousePressEvent(QMouseEvent *) override;
    virtual void mouseReleaseEvent(QMouseEvent *) override;
private:
    QVector<MainWidgetExample *> _elements;
    bool _fullWidget;
    int _round;
private slots:
    void TextChanged();
};

#endif // MAINWIDGETEXAMPLE_H
