#include "singletypewidget.h"

SingleTypeWidget::SingleTypeWidget(TYPES _typein, QJsonValue _value,QWidget *parent)
    :MainWidgetExample(parent)
{
    this->MainFunctions();
    switch (_typein) {
    case TYPES::BOOL:
    {
      this->_type = TYPES::BOOL;
            this->_key->hide();
            this->_value->setText(_value.toBool() == true ? "true" : "false");
            this->_label->setText(" : ");
       break;

    }
    case TYPES::DOUBLE:
    {
        this->_type = TYPES::DOUBLE;

            this->_key->hide();
            this->_value->setText(std::to_string(_value.toDouble()).c_str());
            this->_label->setText(" : ");
        break;
    }
    case TYPES::STRING:
    {
        this->_type = TYPES::STRING;

            this->_key->hide();
            this->_value->setText(_value.toString());
            this->_label->setText(" : ");
        break;
    }
   }

    SetColors();
}

SingleTypeWidget::SingleTypeWidget(TYPES _typein, QJsonValue _key, QJsonValue _value,QWidget *parent)
    :MainWidgetExample(parent)
{
    this->MainFunctions();
    switch (_typein) {
    case TYPES::BOOL:
    {
      this->_type = TYPES::BOOL;
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
    case TYPES::DOUBLE:
    {
        this->_type = TYPES::DOUBLE;

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
    case TYPES::STRING:
    {
        this->_type = TYPES::STRING;
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
   }
    SetColors();
    this->ResizeWidgets();
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
    case TYPES::BOOL:
    {
        this->_color->_colorbackgroundPressed = this->_color->_boolType_Enter;
        this->_color->_colorbackgroundEnter = this->_color->_boolType_Enter;
        this->_color->_colorbackgroundIdle = this->_color->_boolType_Idle;
        this->_color->_colorbackgroundSelected = this->_color->_boolType_Idle;
       break;

    }
    case TYPES::STRING:
    {
        this->_color->_colorbackgroundPressed = this->_color->_stringType_Enter;
        this->_color->_colorbackgroundEnter = this->_color->_stringType_Enter;
        this->_color->_colorbackgroundIdle = this->_color->_stringType_Idle;
        this->_color->_colorbackgroundSelected = this->_color->_stringType_Idle;
        break;
    }
    case TYPES::DOUBLE:
        this->_color->_colorbackgroundPressed = this->_color->_doubleType_Enter;
        this->_color->_colorbackgroundEnter = this->_color->_doubleType_Enter;
        this->_color->_colorbackgroundIdle = this->_color->_doubleType_Idle;
        this->_color->_colorbackgroundSelected = this->_color->_doubleType_Idle;
       break;
   }

}

