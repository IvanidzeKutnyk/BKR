#include "xmlsimpleobject.h"

XmlSimpleObject::XmlSimpleObject(QWidget *parent)
:MainWidgetExample(parent)
{
        FirstObject();
        this->_color->_colorbackgroundPressed = this->_color->_RootWidgetColor;
        this->_color->_colorbackgroundEnter = this->_color->_RootWidgetColor;
        this->_color->_colorbackgroundIdle = this->_color->_RootWidgetColor;
        this->_color->_colorbackgroundSelected = this->_color->_RootWidgetColor;
}
void XmlSimpleObject::FirstObject()
{
    this->SetFullWidget(true);
    this->Set_Memory();
    this->AddWidget();
    this->SetStyleSheetSimple();
    this->_value->hide();
    this->_label->setText(" : ");
    this->_key->setText("ROOT_XML");
    this->SetRound(5);
}
