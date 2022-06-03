#include "advancedtypewidget.h"

AdvancedTypeWidget::AdvancedTypeWidget(TYPES _typein,QJsonValue _value,QWidget *parent)
    :MainWidgetExample(parent)
{
    SetMemory();
    switch (_typein) {
    case AdvancedTypeWidget::TYPES::MASSIVE:
        this->_type = TYPES::MASSIVE;
        this->setStyleSheet(this->_color->StyleSheetLineEditMass);
        this->_color->_bordercolorSelected = this->_color->_bordercolorMassive;
        break;
    case AdvancedTypeWidget::TYPES::OBJECT:
        this->_type = TYPES::OBJECT;
        this->setStyleSheet(this->_color->StyleSheetLineEditObj);
        this->_color->_bordercolorSelected = this->_color->_bordercolorObject;
        break;
    }
    this->_value->hide();
    this->_label->hide();
    this->_key->setText(_value.toString());

}
AdvancedTypeWidget::AdvancedTypeWidget(TYPES _typein,QWidget *parent)
    :MainWidgetExample(parent)
{
    SetMemory();
    switch (_typein) {
    case AdvancedTypeWidget::TYPES::MASSIVE:
        this->_type = TYPES::MASSIVE;
        this->setStyleSheet(this->_color->StyleSheetLineEditMass);
        this->_color->_bordercolorSelected = this->_color->_bordercolorMassive;
        break;
    case AdvancedTypeWidget::TYPES::OBJECT:
        this->_type = TYPES::OBJECT;
        this->setStyleSheet(this->_color->StyleSheetLineEditObj);
        this->_color->_bordercolorSelected = this->_color->_bordercolorObject;
        break;
    }
    this->_titlewidget->hide();
}
AdvancedTypeWidget::AdvancedTypeWidget(QWidget *parent)
    :MainWidgetExample(parent)
{
    FirstObject();
    this->_color->_bordercolorSelected = this->_color->_bordercolorObject;
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
    this->setStyleSheet(this->_color->StyleSheetLineEditObj);
}
void AdvancedTypeWidget::SetMemory()
{
    this->SetFullWidget(true);
    this->Set_Memory();
    this->AddWidget();
    this->SetStyleSheetSimple();
}
