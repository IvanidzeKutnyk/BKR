#ifndef ADVANCEDTYPEWIDGET_H
#define ADVANCEDTYPEWIDGET_H

//Library Start +++++++++++++++++++++++++++++++++++++++++++++
#include "mainwidgetexample.h"
#include "QJsonArray"
//Library END +++++++++++++++++++++++++++++++++++++++++++++++

class AdvancedTypeWidget :public MainWidgetExample
{
public:

    AdvancedTypeWidget(TYPES,QJsonValue,QWidget *parent = nullptr);
    AdvancedTypeWidget(TYPES,QWidget *parent = nullptr);
    AdvancedTypeWidget(QWidget *parent = nullptr);

    void FirstObject();
    void SetMemory();
};

#endif // ADVANCEDTYPEWIDGET_H
