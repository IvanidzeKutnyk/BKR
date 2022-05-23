#include "mainwidgetexample.h"

MainWidgetExample::MainWidgetExample(QWidget *parent)
    : QWidget{parent}
{
    this->_color = new ColorStyleSheet();
    AdvWidget();
}
MainWidgetExample::~MainWidgetExample()
{
}
//SetMemory
void MainWidgetExample::Set_Memory_Simp()
{
    this->_titlewidget = new QWidget();
    this->_key = new QLineEdit();
    this->_label = new QLabel();
    this->_value = new QLineEdit();
}
void MainWidgetExample::Set_Memory_Adv()
{
    this->_inputwidget = new QWidget();
    this->_titlewidget = new QWidget();
    this->_infowidget = new QWidget();
    this->_key = new QLineEdit();
    this->_label = new QLabel();
    this->_value = new QLineEdit();
}
//AddWidgets
void MainWidgetExample::AddWidgetAdvenced()
{
    //MainWidget
    this->setLayout(new QVBoxLayout());
    this->layout()->addWidget(this->_titlewidget);
    this->layout()->addWidget(this->_infowidget);
    this->layout()->addItem(new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Expanding));
    //TitleWidget
    this->_titlewidget->setLayout(new QHBoxLayout());
    this->_titlewidget->layout()->addWidget(this->_key);
    this->_titlewidget->layout()->addWidget(this->_label);
    this->_titlewidget->layout()->addWidget(this->_value);
    this->_titlewidget->layout()->addItem(new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Expanding));
    //Info Widget
    this->_infowidget->setLayout(new QVBoxLayout());
    this->_infowidget->layout()->addItem(new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Expanding));
    this->_infowidget->layout()->addWidget(this->_inputwidget);
    //Connect
    connect(this->_key,&QLineEdit::textChanged,this,&MainWidgetExample::TextChanged);
    connect(this->_value,&QLineEdit::textChanged,this,&MainWidgetExample::TextChanged);
}
void MainWidgetExample::AddWidgetSimple()
{
    //MainWidget
    this->setLayout(new QVBoxLayout());
    this->layout()->addWidget(this->_titlewidget);
    this->layout()->addItem(new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Expanding));
    this->_titlewidget->setLayout(new QHBoxLayout());
    this->_titlewidget->layout()->addWidget(this->_key);
    this->_titlewidget->layout()->addWidget(this->_label);
    this->_titlewidget->layout()->addWidget(this->_value);
    this->_titlewidget->layout()->addItem(new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Expanding));
    connect(this->_key,&QLineEdit::textChanged,this,&MainWidgetExample::TextChanged);
    connect(this->_value,&QLineEdit::textChanged,this,&MainWidgetExample::TextChanged);
}
void MainWidgetExample::Add_Son(MainWidgetExample * _son)
{
    this->_sons.push_front(_son);
}
//Resize LineEdit
void MainWidgetExample::ResizeLineEdit()
{
    QString textk = this->_key->text();
    QString textv = this->_value->text();

    QFontMetrics fmk(this->_key->font());
    QFontMetrics fmv(this->_value->font());
    int pixelsWideK = fmk.width(textk);
    int pixelsWideV = fmv.width(textv);
    this->_key->setFixedWidth(pixelsWideK + 25);
    this->_value->setFixedWidth(pixelsWideV + 25);
}
//Simple and ADV Widget
void MainWidgetExample::SimpleWidget()
{
    this->Set_Memory_Simp();
    this->AddWidgetSimple();
    this->SetStyleSheetSimple();
}
void MainWidgetExample::AdvWidget()
{
     this->Set_Memory_Adv();
     this->AddWidgetAdvenced();
}
//StyleSheets
void MainWidgetExample::SetStyleSheetSimple()
{
    //TestPart
    this->TestSetText();
    //Main Part
   this->ResizeLineEdit();
        //StyleSheet
    this->setStyleSheet(this->_color->StyleSheetLineEdit);
    //Size
    this->_titlewidget->setFixedHeight(50);

}
//Test
void MainWidgetExample::TestSetText()
{
    this->_key->setText("Hello");
    this->_label->setText(" : ");
    this->_value->setText("myText");
}
void MainWidgetExample::TextChanged()
{
    this->ResizeLineEdit();
}
