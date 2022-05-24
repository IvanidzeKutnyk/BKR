#ifndef ADVANCEDTYPEWIDGET_H
#define ADVANCEDTYPEWIDGET_H

//Library Start +++++++++++++++++++++++++++++++++++++++++++++
#include "mainwidgetexample.h"
#include "QJsonArray"
//Library END +++++++++++++++++++++++++++++++++++++++++++++++

class AdvancedTypeWidget :public MainWidgetExample
{
public:
    enum class ADVANCEDTYPE
    {
        MASSIVE,
        OBJECT
    };
    AdvancedTypeWidget(ADVANCEDTYPE,QJsonValue,QWidget *parent = nullptr);
    AdvancedTypeWidget(ADVANCEDTYPE,QWidget *parent = nullptr);
    AdvancedTypeWidget(QWidget *parent = nullptr);

    void FirstObject();
    void SetColors();
    void SetMemory();
private:
    ADVANCEDTYPE _type;
};

#endif // ADVANCEDTYPEWIDGET_H
