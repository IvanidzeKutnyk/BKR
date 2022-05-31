#include "xmladvancedobject.h"

xmladvancedobject::xmladvancedobject(QWidget *parent)
:MainWidgetExample(parent)
{
        FirstObject();
        this->_color->_colorbackgroundPressed = this->_color->_RootWidgetColor;
        this->_color->_colorbackgroundEnter = this->_color->_RootWidgetColor;
        this->_color->_colorbackgroundIdle = this->_color->_RootWidgetColor;
        this->_color->_colorbackgroundSelected = this->_color->_RootWidgetColor;
}
xmladvancedobject::xmladvancedobject(QString _key,QWidget *parent)
:MainWidgetExample(parent)
{
    this->SetFullWidget(true);
    this->Set_Memory();
    this->AddWidget();
    this->SetStyleSheetSimple();

    this->_label->setText(" : ");
    this->_key->setText(_key);
    this->_value->hide();

    this->_color->_colorbackgroundPressed = this->_color->_RootWidgetColor;
    this->_color->_colorbackgroundEnter = this->_color->_RootWidgetColor;
    this->_color->_colorbackgroundIdle = this->_color->_RootWidgetColor;
    this->_color->_colorbackgroundSelected = this->_color->_RootWidgetColor;
}

void xmladvancedobject::FirstObject()
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
