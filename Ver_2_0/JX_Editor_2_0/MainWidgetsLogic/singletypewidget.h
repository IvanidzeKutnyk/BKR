#ifndef SINGLETYPEWIDGET_H
#define SINGLETYPEWIDGET_H

//Library Start +++++++++++++++++++++++++++++++++++++++++++++
#include <MainWidgetsLogic/mainwidgetexample.h>
//Library END +++++++++++++++++++++++++++++++++++++++++++++++
class SingleTypeWidget : public MainWidgetExample
{
public:
    SingleTypeWidget(QJsonObject&,QWidget *parent = nullptr);
};

#endif // SINGLETYPEWIDGET_H
