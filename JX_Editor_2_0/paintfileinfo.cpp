#include "paintfileinfo.h"

Paintfileinfo::Paintfileinfo()
{

}
void Paintfileinfo::Set_Memory()
{
    this->_color = new ColorSyleSheet();
    this->_mainlayout = new QVBoxLayout();
}
void Paintfileinfo::Add_Main_Widget()
{
    this->setLayout(this->_mainlayout);

}
