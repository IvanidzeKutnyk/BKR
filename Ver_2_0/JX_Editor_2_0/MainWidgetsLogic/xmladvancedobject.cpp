#include "xmladvancedobject.h"

xmladvancedobject::xmladvancedobject(QWidget *parent)
:MainWidgetExample(parent)
{
        FirstObject();
}
xmladvancedobject::xmladvancedobject(QString _key,QWidget *parent)
:MainWidgetExample(parent)
{
    this->SetFullWidget(true);
    this->Set_Memory();
    this->AddWidget();
    this->SetStyleSheetSimple();

    this->_label->hide();
    this->_key->setText(_key);
    this->_value->hide();
    this->setStyleSheet(this->_color->StyleSheetLineEditObj);
    this->_color->_bordercolorSelected = this->_color->_bordercolorObject;


}

void xmladvancedobject::FirstObject()
{
    this->SetFullWidget(true);
    this->Set_Memory();
    this->AddWidget();
    this->SetStyleSheetSimple();
    this->_value->hide();
    this->_label->hide();
    this->_key->setText("ROOT_XML");
    this->setStyleSheet(this->_color->StyleSheetLineEditMass);
    this->_color->_bordercolorSelected = this->_color->_bordercolorMassive;

}
