#include "advancedtypewidget.h"

AdvancedTypeWidget::AdvancedTypeWidget(TYPES _typein,QJsonValue _value,QWidget *parent)
    :MainWidgetExample(parent)
{
    SetMemory();
    switch (_typein) {
    case AdvancedTypeWidget::TYPES::MASSIVE:
        this->_type = TYPES::MASSIVE;
        break;
    case AdvancedTypeWidget::TYPES::OBJECT:
        this->_type = TYPES::OBJECT;
        break;
    }
    SetColors();
    this->_value->hide();
    this->_label->setText(" : ");
    this->_key->setText(_value.toString());
}
AdvancedTypeWidget::AdvancedTypeWidget(TYPES _typein,QWidget *parent)
    :MainWidgetExample(parent)
{
    SetMemory();
    switch (_typein) {
    case AdvancedTypeWidget::TYPES::MASSIVE:
        this->_type = TYPES::MASSIVE;
        break;
    case AdvancedTypeWidget::TYPES::OBJECT:
        this->_type = TYPES::OBJECT;
        break;
    }
    SetColors();
    this->_titlewidget->hide();
}
AdvancedTypeWidget::AdvancedTypeWidget(QWidget *parent)
    :MainWidgetExample(parent)
{
    FirstObject();
    this->_color->_colorbackgroundPressed = this->_color->_RootWidgetColor;
    this->_color->_colorbackgroundEnter = this->_color->_RootWidgetColor;
    this->_color->_colorbackgroundIdle = this->_color->_RootWidgetColor;
    this->_color->_colorbackgroundSelected = this->_color->_RootWidgetColor;
    //this->ResizeWidgets();
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
void AdvancedTypeWidget::SetMemory()
{
    this->SetFullWidget(true);
    this->Set_Memory();
    this->AddWidget();
    this->SetStyleSheetSimple();
}
void AdvancedTypeWidget::SetColors()
{
    switch (_type) {
    case AdvancedTypeWidget::TYPES::MASSIVE:
        this->_color->_colorbackgroundPressed = this->_color->_massiveType_Enter;
        this->_color->_colorbackgroundEnter = this->_color->_massiveType_Enter;
        this->_color->_colorbackgroundIdle = this->_color->_massiveType_Idle;
        this->_color->_colorbackgroundSelected = this->_color->_massiveType_Idle;
        this->SetRound(10);
        break;
    case AdvancedTypeWidget::TYPES::OBJECT:
        this->_color->_colorbackgroundPressed = this->_color->_objectType_Enter;
        this->_color->_colorbackgroundEnter = this->_color->_objectType_Enter;
        this->_color->_colorbackgroundIdle = this->_color->_objectType_Idle;
        this->_color->_colorbackgroundSelected = this->_color->_objectType_Idle;
        this->SetRound(15);
        break;
    }
}
