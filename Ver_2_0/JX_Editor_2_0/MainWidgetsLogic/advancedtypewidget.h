#ifndef ADVANCEDTYPEWIDGET_H
#define ADVANCEDTYPEWIDGET_H

//Library Start +++++++++++++++++++++++++++++++++++++++++++++
#include <MainWidgetsLogic/mainwidgetexample.h>
//Library END +++++++++++++++++++++++++++++++++++++++++++++++

class AdvancedTypeWidget :public MainWidgetExample
{
public:
    AdvancedTypeWidget(QJsonObject&,QWidget *parent = nullptr);
};

#endif // ADVANCEDTYPEWIDGET_H
