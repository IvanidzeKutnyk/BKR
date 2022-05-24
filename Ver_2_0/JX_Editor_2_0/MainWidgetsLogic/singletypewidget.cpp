#include "singletypewidget.h"

SingleTypeWidget::SingleTypeWidget(SINGLETYPE _typein, QJsonValue _key, QJsonValue _value,QWidget *parent)
    :MainWidgetExample(parent)
{
    this->MainFunctions();
    switch (_typein) {
    case SINGLETYPE::BOOL:
    {
      this->_type = SINGLETYPE::BOOL;
        if(_key.isNull())
        {
            this->_key->hide();
            this->_value->setText(_value.toBool() == true ? "true" : "false");
        }
        else
        {
            this->_key->setText(_key.toString());
            this->_value->setText(_value.toBool() == true ? "true" : "false");
        }
             this->_label->setText(" : ");
       break;

    }
    case SINGLETYPE::DOUBLE:
    {
        this->_type = SINGLETYPE::DOUBLE;

        if(_key.isNull())
        {
            this->_key->hide();
            this->_value->setText(std::to_string(_value.toDouble()).c_str());
        }
        else
        {
            this->_key->setText(_key.toString());
            this->_value->setText(std::to_string(_value.toDouble()).c_str());
        }
             this->_label->setText(" : ");

        break;
    }
    case SINGLETYPE::STRING:
    {
        this->_type = SINGLETYPE::STRING;
        if(_key.isNull())
        {
            this->_key->hide();
            this->_value->setText(_value.toString());
        }
        else
        {
            this->_key->setText(_key.toString());
            this->_value->setText(_value.toString());
        }
             this->_label->setText(" : ");
        break;
    }
    case SINGLETYPE::INT:
        this->_type = SINGLETYPE::INT;
       break;
   }
    SetColors();
}
void SingleTypeWidget::MainFunctions()
{
    this->SetFullWidget(false);
    this->Set_Memory();
    this->AddWidget();
    this->SetStyleSheetSimple();
    this->SetRound(10);
}
void SingleTypeWidget::SetColors()
{
    switch (this->_type)
    {
    case SINGLETYPE::BOOL:
    {

       break;

    }
    case SINGLETYPE::INT:
    {

        break;
    }
    case SINGLETYPE::STRING:
    {

        break;
    }
    case SINGLETYPE::DOUBLE:
        this->_color->_colorbackgroundPressed = this->_color->_intType_Enter;
        this->_color->_colorbackgroundEnter = this->_color->_intType_Enter;
        this->_color->_colorbackgroundIdle = this->_color->_intType_Idle;
        this->_color->_colorbackgroundSelected = this->_color->_intType_Idle;
       break;
   }
}
