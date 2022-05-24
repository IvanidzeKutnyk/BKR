#include "advancedtypewidget.h"

AdvancedTypeWidget::AdvancedTypeWidget(QJsonValue _value,QWidget *parent)
    :MainWidgetExample(parent)
{

}
AdvancedTypeWidget::AdvancedTypeWidget(QWidget *parent)
    :MainWidgetExample(parent)
{
    FirstObject();
    this->_color->_colorbackgroundPressed = this->_color->_RootWidgetColor;
    this->_color->_colorbackgroundEnter = this->_color->_RootWidgetColor;
    this->_color->_colorbackgroundIdle = this->_color->_RootWidgetColor;
    this->_color->_colorbackgroundSelected = this->_color->_RootWidgetColor;
}
void AdvancedTypeWidget::FirstObject()
{
    this->SetFullWidget(true);
    this->Set_Memory();
    this->AddWidget();
    this->SetStyleSheetSimple();
    this->_value->hide();
    this->_label->setText(" : ");
    this->_key->setText("ROOT");
    this->SetRound(5);
}

