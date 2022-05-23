#include "mainwidgetexample.h"

MainWidgetExample::MainWidgetExample(QWidget *parent)
    : QWidget{parent}
{
//TestSetText();
}
MainWidgetExample::~MainWidgetExample()
{
}
void MainWidgetExample::paintEvent(QPaintEvent *e)
{
    Q_UNUSED(e);
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing,true);
    painter.setPen(this->_color->_bordercolordefault);
    painter.setBrush(this->_color->_colorbackgroundSelected);
    painter.drawRoundedRect(QRectF(0,
                                   0,
                                   this->width(),
                                   this->height()),5,5);
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
    this->_titlewidget->layout()->setContentsMargins(0,0,0,0);
   this->_titlewidget->setFixedHeight(30);

}
//Set
void MainWidgetExample::SetFullWidget(bool _value)
{
    this->_fullWidget = _value;
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
//MouseEvents
void MainWidgetExample::enterEvent(QEvent *)
{
    this->_color->_colorbackgroundSelected = this->_color->_colorbackgroundEnter;
    update();
}
void MainWidgetExample::leaveEvent(QEvent *)
{
     this->_color->_colorbackgroundSelected = this->_color->_colorbackgroundIdle;
    update();
}
void MainWidgetExample::mousePressEvent(QMouseEvent *)
{
     this->_color->_colorbackgroundSelected = this->_color->_colorbackgroundPressed;
    update();
}
void MainWidgetExample::mouseReleaseEvent(QMouseEvent *)
{
    this->_color->_colorbackgroundSelected = this->_color->_colorbackgroundEnter;
    update();
}
