#ifndef ADVANCEDTYPEWIDGET_H
#define ADVANCEDTYPEWIDGET_H

//Library Start +++++++++++++++++++++++++++++++++++++++++++++
#include "mainwidgetexample.h"
#include "QJsonArray"
//Library END +++++++++++++++++++++++++++++++++++++++++++++++

class AdvancedTypeWidget :public MainWidgetExample
{
public:
    AdvancedTypeWidget(QJsonValue,QWidget *parent = nullptr);
    AdvancedTypeWidget(QWidget *parent = nullptr);

    void FirstObject();
};

#endif // ADVANCEDTYPEWIDGET_H
