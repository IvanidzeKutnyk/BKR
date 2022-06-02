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
         this->setStyleSheet(_color->StyleSheetLineEditBool);
       break;

    }
    case TYPES::DOUBLE:
    {
        this->_type = TYPES::DOUBLE;

            this->_key->hide();
            this->_value->setText(std::to_string(_value.toDouble()).c_str());
         this->setStyleSheet(_color->StyleSheetLineEditDouble);
        break;
    }
    case TYPES::STRING:
    {
        this->_type = TYPES::STRING;

            this->_key->hide();
        if(_value.toString().isEmpty())
        {
            this->_value->setText("    ");
        }
        else
        {
            this->_value->setText(_value.toString());
        }

         this->setStyleSheet(_color->StyleSheetLineEditString);
        break;
    }

   }
    this->_label->hide();
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
       this->setStyleSheet(_color->StyleSheetLineEditBool);
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
        this->setStyleSheet(_color->StyleSheetLineEditDouble);
        break;
    }
    case TYPES::STRING:
    {
        this->_type = TYPES::STRING;
        if(_key.isNull())
        {
            this->_key->hide();
            if(_value.toString().isEmpty())
            {
                this->_value->setText("    ");
            }
            else
            {
                this->_value->setText(_value.toString());
            }
        }
        else
        {
            this->_key->setText(_key.toString());
            if(_value.toString().isEmpty())
            {
                this->_value->setText("    ");
            }
            else
            {
                this->_value->setText(_value.toString());
            }
        }
             this->_label->setText(" : ");
        this->setStyleSheet(_color->StyleSheetLineEditString);
        break;
    }
   }
    this->ResizeWidgets();
}
void SingleTypeWidget::MainFunctions()
{
    this->SetFullWidget(false);
    this->Set_Memory();
    this->AddWidget();
    this->SetStyleSheetSimple();
}

