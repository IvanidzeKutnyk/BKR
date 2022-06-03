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
#include <QDomElement>
#include <QFont>
#include <QMenu>
#include "ColorStyle/colorstylesheet.h"
//Library END +++++++++++++++++++++++++++++++++++++++++++++++

class MainWidgetExample : public QWidget
{
    Q_OBJECT
public:
    enum class TYPES
    {
        MASSIVE,
        OBJECT,
        BOOL,
        STRING,
        DOUBLE
    };
    explicit MainWidgetExample(QWidget *parent = nullptr);
    ~MainWidgetExample();
public:

    //Widgets
    void Set_Memory();
    void AddWidget();
    //Else
    void Add_Son(MainWidgetExample *);
    //Resize elements
    void ResizeLineEdit();
    void ResizeWidgets();
    //StyleSheet
    void SetStyleSheetSimple();
    void SetFullWidget(bool);
    void LoadObject(QJsonObject);
    void LoadMassive(QJsonArray);
    void LoadXML(QDomElement);

protected:
    QMenu *pMainMenu;
    QMenu *pTypesMenu;
    QAction * pAdvWidget;
    QAction * pMassWidget;
    QAction * pStrWidget;
    QAction * pDoubleWidget;
    QAction * pBoolWidget;
    TYPES _type;
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
    QFont _font;
protected:
    virtual void paintEvent(QPaintEvent *) override;
    virtual void mousePressEvent(QMouseEvent *) override;
    QVector<MainWidgetExample *> _elements;

private:

    bool _fullWidget;
public slots:
        void onTaskBoxContextMenuEvent();
private slots:
    void TextChanged();
};

#endif // MAINWIDGETEXAMPLE_H
