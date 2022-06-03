#ifndef XMLSIMPLEOBJECT_H
#define XMLSIMPLEOBJECT_H

//Library Start +++++++++++++++++++++++++++++++++++++++++++++
#include "mainwidgetexample.h"
//Library END +++++++++++++++++++++++++++++++++++++++++++++++

class XmlSimpleObject  :public MainWidgetExample
{
public:
    XmlSimpleObject(QString, QString,QWidget *parent = nullptr);
public:
   void SetColors();
   void MainFunctions();
};

#endif // XMLSIMPLEOBJECT_H
