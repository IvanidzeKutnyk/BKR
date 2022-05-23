#include "mainwidgetexample.h"

MainWidgetExample::MainWidgetExample(QWidget *parent)
    : QWidget{parent}
{
    this->_fullWidget = false;
TestSetText();
}
MainWidgetExample::~MainWidgetExample()
{
}
void MainWidgetExample::paintEvent(QPaintEvent *e)
{
    Q_UNUSED(e);
    QPainter painter;
    painter.setRenderHint(QPainter::Antialiasing,true);
    painter.setPen(this->_color->_bordercolordefault);
    painter.setBrush(this->_backgrounddefault);
}
//SetMemory
void MainWidgetExample::Set_Memory()
{
    this->_color = new ColorStyleSheet();
    this->_titlewidget = new QWidget();
    this->_key = new QLineEdit();
    this->_label = new QLabel();
    this->_value = new QLineEdit();

    if(this->_fullWidget)
    {
        this->_infowidget = new QWidget();
        this->_inputwidget = new QWidget();
    }


}
//AddWidgets
void MainWidgetExample::AddWidget()
{
    if(this->_fullWidget)
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
    }
    else
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
    }

    //Connect
    connect(this->_key,&QLineEdit::textChanged,this,&MainWidgetExample::TextChanged);
    connect(this->_value,&QLineEdit::textChanged,this,&MainWidgetExample::TextChanged);
}
//Add elements into info widget
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
//StyleSheets
void MainWidgetExample::SetStyleSheetSimple()
{
    //Main Part
   this->ResizeLineEdit();
   this->_key->setFixedHeight(30);
   this->_value->setFixedHeight(30);
        //StyleSheet
   this->setStyleSheet(this->_color->StyleSheetLineEdit);
    //Size
   this->_titlewidget->setFixedHeight(50);

}
//Test
void MainWidgetExample::TestSetText()
{
    this->Set_Memory();
    this->_key->setText("Hello");
    this->_label->setText(" : ");
    this->_value->setText("myText");

    this->AddWidget();
    this->SetStyleSheetSimple();

}
//Slot When text Changed
void MainWidgetExample::TextChanged()
{
    this->ResizeLineEdit();
}
