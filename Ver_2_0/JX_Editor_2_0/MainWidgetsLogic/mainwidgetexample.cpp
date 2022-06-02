#include "mainwidgetexample.h"
#include "advancedtypewidget.h"
#include "singletypewidget.h"
#include "xmlsimpleobject.h"
#include "xmladvancedobject.h"

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
    painter.setRenderHint(QPainter::Antialiasing,true);
    QPen pen;
    pen.setColor(this->_color->_bordercolorSelected);
    pen.setWidth(5);
    painter.setPen(pen);
    painter.setBrush(this->_color->_advancedsimplecolorIdle);
    painter.drawRoundedRect(QRectF(0,
                                   0,
                                   this->width(),
                                   this->height()),10,10);
}
//SetMemory
void MainWidgetExample::Set_Memory()
{
    this->_color = new ColorStyleSheet();
    this->_titlewidget = new QWidget();
    this->_key = new QLineEdit();
    this->_label = new QLabel();
    this->_value = new QLineEdit();
    this->_value->setObjectName("_value");
    this->_key->setObjectName("_key");
    this->_label->setObjectName("_label");

    this->pMainMenu = new QMenu(this);
    this->pTypesMenu = new QMenu(this);

    this->pAdvWidget = new QAction("Add Object");
    this->pMassWidget = new QAction("Add Massive");
    this->pStrWidget = new QAction("Add String");
    this->pDoubleWidget = new QAction("Add Number");
    this->pBoolWidget = new QAction("Add Bool");

        connect(pAdvWidget, SIGNAL(triggered()), this, SLOT(onTaskBoxContextMenuEvent()));
        connect(pMassWidget, SIGNAL(triggered()), this, SLOT(onTaskBoxContextMenuEvent()));
        connect(pStrWidget, SIGNAL(triggered()), SLOT(onTaskBoxContextMenuEvent()));
        connect(pDoubleWidget, SIGNAL(triggered()), this, SLOT(onTaskBoxContextMenuEvent()));
        connect(pBoolWidget, SIGNAL(triggered()), this, SLOT(onTaskBoxContextMenuEvent()));

        pAdvWidget->setData(1);
        pMassWidget->setData(2);
        pStrWidget ->setData(3);
        pDoubleWidget->setData(4);
        pBoolWidget->setData(5);
     pMainMenu->addAction(pAdvWidget);
     pMainMenu->addAction(pMassWidget);
     pMainMenu->addMenu(pTypesMenu);
     pTypesMenu->setTitle("Elements");
     pTypesMenu->addAction(pStrWidget);
     pTypesMenu->addAction(pDoubleWidget);
     pTypesMenu->addAction(pBoolWidget);

    if(this->_fullWidget)
    {
        this->_infowidget = new QWidget();
        this->_inputwidget = new QWidget();
    }
    _font.setBold(true);
    _font.setPointSize(10);
    this->_key->setFont(_font);
    this->_value->setFont(_font);




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
    //Size
    this->_titlewidget->layout()->setContentsMargins(0,0,0,0);
   this->_titlewidget->setFixedHeight(30);

}
//Set
void MainWidgetExample::SetFullWidget(bool _value)
{
    this->_fullWidget = _value;
}
//Slot When text Changed
void MainWidgetExample::TextChanged()
{
    this->ResizeLineEdit();
    this->ResizeWidgets();
}
void MainWidgetExample::LoadObject(QJsonObject value)
{
    for(auto _ita = value.begin(); _ita != value.end(); _ita++)
    {
        MainWidgetExample * el = nullptr;
        if(_ita.value().isBool())
        {
            el = new SingleTypeWidget(SingleTypeWidget::TYPES::BOOL, (QJsonValue)_ita.key(), (QJsonValue)_ita.value());
        }
        else if(_ita.value().isDouble())
        {
            el = new SingleTypeWidget(SingleTypeWidget::TYPES::DOUBLE, (QJsonValue)_ita.key(), (QJsonValue)_ita.value());
        }
        else if(_ita.value().isString())
        {
            el = new SingleTypeWidget(SingleTypeWidget::TYPES::STRING, (QJsonValue)_ita.key(), (QJsonValue)_ita.value());
        }
        else if(_ita.value().isArray())
        {
            el = new AdvancedTypeWidget(AdvancedTypeWidget::TYPES::MASSIVE,_ita.key());
            el->LoadMassive(_ita.value().toArray());
            el->ResizeWidgets();
        }
        else if(_ita.value().isObject())
        {
            el = new AdvancedTypeWidget(AdvancedTypeWidget::TYPES::OBJECT,_ita.key());
            el->LoadObject(_ita.value().toObject());
            el->ResizeWidgets();
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
            el = new SingleTypeWidget(SingleTypeWidget::TYPES::STRING, (QJsonValue)tb->toString());
        }
        else if(tb->isBool())
        {
            el = new SingleTypeWidget(SingleTypeWidget::TYPES::BOOL, (QJsonValue)tb->toBool());
        }
        if(tb->isDouble())
        {
            el = new SingleTypeWidget(SingleTypeWidget::TYPES::DOUBLE, (QJsonValue)tb->toDouble());
        }
        if(tb->isObject())
        {
            qDebug()<<"OBJ";
            QJsonObject a = tb->toObject();
            el = new AdvancedTypeWidget(AdvancedTypeWidget::TYPES::OBJECT);
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
void MainWidgetExample::LoadXML(QDomElement value)
{
    while(!value.isNull())
    {
        MainWidgetExample * el = nullptr;
        if(value.firstChild().toElement().isNull())
        {
             qDebug()<<value.tagName() << " : " << value.text();
             el = new XmlSimpleObject(value.tagName(),value.text());
        }
        else
        {
            if(!value.attributes().isEmpty())
            {
               qDebug()<< value.tagName() <<"Start";
               auto map = value.attributes();
               for(int i = 0; i < map.length(); i++)
               {
                      auto inode = map.item(i);
                      auto attr = inode.toAttr();
                      qDebug()<< value.tagName() <<"|"<< attr.name()<<" : "<<attr.value();
               }
               LoadXML(value.firstChild().toElement());
               qDebug()<< value.tagName() <<"End";
            }
            else
            {
                el = new xmladvancedobject(value.tagName());
                qDebug()<< value.tagName() <<"Start";
                el->LoadXML(value.firstChild().toElement());
                qDebug()<< value.tagName() <<"End";
            }
        }
          value = value.nextSibling().toElement();
          this->_elements.push_back(el);
          this->_inputwidget->layout()->addWidget(el);
    }
}

void MainWidgetExample::ResizeWidgets()
{
    switch(this->_type)
    {
    case TYPES::BOOL:
        case TYPES::DOUBLE:
            case TYPES::STRING:
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
                break;
            }
        case TYPES::OBJECT:
        {       int max = 0;
                for(auto _ita = this->_elements.begin(); _ita != this->_elements.end(); _ita++)
                {
                    if((*_ita)->width()> max)
                    {
                        max = (*_ita)->width();
                        this->setFixedWidth(max + 200);
                    }
                    else
                    {
                        continue;
                    }
                }
            qDebug()<<max;
            break;
        }
            case TYPES::MASSIVE:
            {
                break;
            }
    }
}
void MainWidgetExample::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::RightButton)
    pMainMenu->exec(cursor().pos());
}
void MainWidgetExample::onTaskBoxContextMenuEvent()
{
    MainWidgetExample * _object = nullptr;
    QAction * pEven = qobject_cast <QAction *> (this-> sender ());
    int iType = pEven->data().toInt();
    switch (iType)
    {
    case 1: //Adv
           _object = new AdvancedTypeWidget(TYPES::OBJECT,(QJsonValue)" ");
           this->_elements.push_back(_object);
           this->_inputwidget->layout()->addWidget(_object);
           break;
    case 2: //Mass
        _object = new AdvancedTypeWidget(TYPES::MASSIVE,(QJsonValue)" ");
        this->_elements.push_back(_object);
        this->_inputwidget->layout()->addWidget(_object);
           break;
    case 3: //String
        _object = new SingleTypeWidget(TYPES::STRING,(QJsonValue)" ",(QJsonValue)" ");
        this->_elements.push_back(_object);
        this->_inputwidget->layout()->addWidget(_object);
           break;
    case 4: //Double
        _object = new SingleTypeWidget(TYPES::DOUBLE,(QJsonValue)" ",(QJsonValue)" ");
        this->_elements.push_back(_object);
        this->_inputwidget->layout()->addWidget(_object);
           break;
    case 5: //Bool
        _object = new SingleTypeWidget(TYPES::BOOL,(QJsonValue)" ",(QJsonValue)" ");
        this->_elements.push_back(_object);
        this->_inputwidget->layout()->addWidget(_object);
           break;

    }
}
