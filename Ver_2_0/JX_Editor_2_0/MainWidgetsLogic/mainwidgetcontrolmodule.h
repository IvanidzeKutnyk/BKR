#ifndef MAINWIDGETCONTROLMODULE_H
#define MAINWIDGETCONTROLMODULE_H
//Library Start +++++++++++++++++++++++++++++++++++++++++++++
#include <QWidget>
#include "mainwidgetexample.h"
//Library END +++++++++++++++++++++++++++++++++++++++++++++++
class MainWidgetControlModule : public QWidget
{
    Q_OBJECT
public:
    explicit MainWidgetControlModule(QWidget *parent = nullptr);
public:
    enum class WidgetType
    {
        SIMPLETYPE,
        ADVANCEDTYPE
    };

};

#endif // MAINWIDGETCONTROLMODULE_H
