#ifndef XMLSIMPLEOBJECT_H
#define XMLSIMPLEOBJECT_H

//Library Start +++++++++++++++++++++++++++++++++++++++++++++
#include "mainwidgetexample.h"
//Library END +++++++++++++++++++++++++++++++++++++++++++++++

class XmlSimpleObject  :public MainWidgetExample
{
public:
    XmlSimpleObject(XMLTYPE);
    XmlSimpleObject(QWidget *parent = nullptr);
public:
   void FirstObject();

};

#endif // XMLSIMPLEOBJECT_H
