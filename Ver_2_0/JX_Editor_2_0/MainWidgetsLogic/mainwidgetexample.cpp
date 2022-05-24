#include "mainwidgetexample.h"
#include "advancedtypewidget.h"
#include "singletypewidget.h"

MainWidgetExample::MainWidgetExample(QWidget *parent)
    : QWidget{parent}
{}
MainWidgetExample::~MainWidgetExample()
{
}
void MainWidgetExample::paintEvent(QPaintEvent *e)
{
    Q_UNUSED(e);
    QPainter painter(this);
    QPen pen(this->_color->_bordercolordefault);
    pen.setCosmetic(true);
    painter.setRenderHint(QPainter::Antialiasing,true);
    painter.setPen(pen);
    painter.setBrush(this->_color->_colorbackgroundSelected);
    painter.drawRoundedRect(QRectF(0,
                                   0,
                                   this->width(),
                                   this->height()),this->_round,this->_round);
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
        this->_infowidget->setLayout(new QHBoxLayout());
        this->_infowidget->layout()->addItem(new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Expanding));
        this->_infowidget->layout()->addWidget(this->_inputwidget);  
        this->_inputwidget->setLayout(new QVBoxLayout());
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
    this->ResizeWidgets();
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

void MainWidgetExample::LoadObject(QJsonObject value)
{
    for(auto _ita = value.begin(); _ita != value.end(); _ita++)
    {
        MainWidgetExample * el = nullptr;
        if(_ita.value().isBool())
        {
            el = new SingleTypeWidget(SingleTypeWidget::SINGLETYPE::BOOL, (QJsonValue)_ita.key(), (QJsonValue)_ita.value());
        }
        else if(_ita.value().isDouble())
        {
            el = new SingleTypeWidget(SingleTypeWidget::SINGLETYPE::DOUBLE, (QJsonValue)_ita.key(), (QJsonValue)_ita.value());
        }
        else if(_ita.value().isString())
        {
            el = new SingleTypeWidget(SingleTypeWidget::SINGLETYPE::STRING, (QJsonValue)_ita.key(), (QJsonValue)_ita.value());
        }
        else if(_ita.value().isArray())
        {
            el = new AdvancedTypeWidget(AdvancedTypeWidget::ADVANCEDTYPE::MASSIVE,_ita.key());
            el->LoadMassive(_ita.value().toArray());
        }
        else if(_ita.value().isObject())
        {
            el = new AdvancedTypeWidget(AdvancedTypeWidget::ADVANCEDTYPE::OBJECT,_ita.key());
            el->LoadObject(_ita.value().toObject());
        }
        this->_elements.push_back(el);
        this->_inputwidget->layout()->addWidget(el);
    }
}
void MainWidgetExample::LoadMassive(QJsonArray value)
{
    MainWidgetExample * el = nullptr;
    for(auto tb = value.begin(); tb != value.end();tb++)
{
        if(tb->isString())
        {
            el = new SingleTypeWidget(SingleTypeWidget::SINGLETYPE::STRING, (QJsonValue)tb->toString());
        }
        else if(tb->isBool())
        {
            el = new SingleTypeWidget(SingleTypeWidget::SINGLETYPE::BOOL, (QJsonValue)tb->toBool());
        }
        if(tb->isDouble())
        {
            el = new SingleTypeWidget(SingleTypeWidget::SINGLETYPE::DOUBLE, (QJsonValue)tb->toDouble());
        }
        if(tb->isObject())
        {
            qDebug()<<"OBJ";
            QJsonObject a = tb->toObject();
            el = new AdvancedTypeWidget(AdvancedTypeWidget::ADVANCEDTYPE::OBJECT);
            el->LoadObject(tb->toObject());
        }

        if(el == nullptr)
        {
            qDebug()<<"NULLPTR";
        }
        else
        {
        this->_elements.push_back(el);
        this->_inputwidget->layout()->addWidget(el);
        }
    }
}
void MainWidgetExample::SetRound(int _a)
{
    this->_round = _a;
}
void MainWidgetExample::ResizeWidgets()
{

    QString textk = this->_key->text();
    QString textv = this->_value->text();
    QString textl = this->_label->text();
    QFontMetrics fmk(this->_key->font());
    QFontMetrics fmv(this->_value->font());
    QFontMetrics fml(this->_label->font());
    int pixelsWideK = fmk.width(textk) + 25;
    int pixelsWideV = fmv.width(textv) + 25;
    int pixelsWideL = fml.width(textl) + 30;

    this->setFixedWidth(pixelsWideK + pixelsWideV + pixelsWideL);
}
