#include "xmlsimpleobject.h"

XmlSimpleObject::XmlSimpleObject(QString _teg, QString _value,QWidget *parent)
{
    MainFunctions();
    this->_key->setText(_teg);
    this->_value->setText(_value);
    this->_label->setText(" : ");
    this->ResizeWidgets();

}
void XmlSimpleObject::MainFunctions()
{
    this->SetFullWidget(false);
    this->Set_Memory();
    this->AddWidget();
    this->SetStyleSheetSimple();
    this->setStyleSheet(_color->StyleSheetLineEditString);
}
