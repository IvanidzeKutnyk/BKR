#ifndef SINGLETYPEWIDGET_H
#define SINGLETYPEWIDGET_H

//Library Start +++++++++++++++++++++++++++++++++++++++++++++
#include "mainwidgetexample.h"
//Library END +++++++++++++++++++++++++++++++++++++++++++++++
class SingleTypeWidget : public MainWidgetExample
{
public:
    SingleTypeWidget(TYPES, QJsonValue, QWidget *parent = nullptr);
    SingleTypeWidget(TYPES, QJsonValue, QJsonValue, QWidget *parent = nullptr);
    void SetColors();
    void MainFunctions();

};

#endif // SINGLETYPEWIDGET_H
