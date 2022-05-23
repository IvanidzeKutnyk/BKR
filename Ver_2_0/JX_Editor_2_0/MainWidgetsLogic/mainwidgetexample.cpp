#include "mainwidgetexample.h"

MainWidgetExample::MainWidgetExample(QWidget *parent)
    : QWidget{parent}
{

}
MainWidgetExample::~MainWidgetExample()
{
   delete this->_mainwidget;
}
void MainWidgetExample::Set_Memory_Simp()
{
    this->_mainwidget = new QWidget();
    this->_titlewidget = new QWidget();
    this->_key = new QLineEdit();
    this->_label = new QLabel();
    this->_value = new QLineEdit();
}
void MainWidgetExample::Set_Memory_Adv()
{
    this->_mainwidget = new QWidget();
    this->_titlewidget = new QWidget();
    this->_infowidget = new QWidget();
    this->_key = new QLineEdit();
    this->_label = new QLabel();
    this->_value = new QLineEdit();
}
void MainWidgetExample::Add_Son(MainWidgetExample * _son)
{
    this->_sons.push_front(_son);
}
