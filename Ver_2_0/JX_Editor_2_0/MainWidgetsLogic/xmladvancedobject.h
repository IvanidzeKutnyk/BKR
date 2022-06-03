#ifndef XMLADVANCEDOBJECT_H
#define XMLADVANCEDOBJECT_H

//Library Start +++++++++++++++++++++++++++++++++++++++++++++
#include "mainwidgetexample.h"
//Library END +++++++++++++++++++++++++++++++++++++++++++++++

class xmladvancedobject :public MainWidgetExample
{
public:
    xmladvancedobject(QString,QWidget *parent = nullptr);
    xmladvancedobject(QWidget *parent = nullptr);
public:
    void FirstObject();

};

#endif // XMLADVANCEDOBJECT_H
