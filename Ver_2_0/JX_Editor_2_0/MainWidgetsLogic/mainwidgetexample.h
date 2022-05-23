#ifndef MAINWIDGETEXAMPLE_H
#define MAINWIDGETEXAMPLE_H

//Library Start +++++++++++++++++++++++++++++++++++++++++++++
#include <QWidget>
#include <QLineEdit>
#include <QVector>
#include <QLabel>
//Library END +++++++++++++++++++++++++++++++++++++++++++++++

class MainWidgetExample : public QWidget
{
    Q_OBJECT
public:
    explicit MainWidgetExample(QWidget *parent = nullptr);
    ~MainWidgetExample();
public:
    void Set_Memory_Adv();
    void Set_Memory_Simp();
    void Add_Son(MainWidgetExample *);
protected:
    //Widgets
    QWidget *_mainwidget;
    QWidget *_titlewidget;
    QWidget *_infowidget;
    //Linedit
    QLineEdit *_key;
    QLineEdit *_value;
    //Label
    QLabel *_label;
private:
    QVector<MainWidgetExample *> _sons;
};

#endif // MAINWIDGETEXAMPLE_H
