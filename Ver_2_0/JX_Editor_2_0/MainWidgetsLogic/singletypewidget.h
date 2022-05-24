#ifndef SINGLETYPEWIDGET_H
#define SINGLETYPEWIDGET_H

//Library Start +++++++++++++++++++++++++++++++++++++++++++++
#include "mainwidgetexample.h"
//Library END +++++++++++++++++++++++++++++++++++++++++++++++
class SingleTypeWidget : public MainWidgetExample
{
public:
    enum class SINGLETYPE
    {
        BOOL,
        STRING,
        DOUBLE
    };
    SingleTypeWidget(SINGLETYPE, QJsonValue, QWidget *parent = nullptr);
    SingleTypeWidget(SINGLETYPE, QJsonValue, QJsonValue, QWidget *parent = nullptr);
    void SetColors();
void MainFunctions();
private:
    SINGLETYPE _type;
};

#endif // SINGLETYPEWIDGET_H
