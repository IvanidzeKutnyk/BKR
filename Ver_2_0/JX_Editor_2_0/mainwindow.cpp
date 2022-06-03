#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "controlwidgetmodule.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->Set_Mamory();
    connect(_openbutton,&Custom_Left_Buttom::SendFileInfoAfterClick,this,&MainWindow::ClickedOpenButtom);
    connect(_addnewfile,&Custom_Left_Buttom::SendFileInfoAfterClick,this,&MainWindow::ClickedOpenButtom);
    this->Add_Elements();
    ui->RightPartW->layout()->addWidget(this->_stackedWidget);
}

MainWindow::~MainWindow()
{
    delete ui;
}
//Set Memory to widgets
void MainWindow::Set_Mamory()
{
    this->_openbutton = new Custom_Left_Buttom(false,true,false,false); //Open Button
    this->_savebutton = new Custom_Left_Buttom(true,false,false,false); //Save Button
    this->_settingbutton = new Custom_Left_Buttom(false,false,true,false);
    this->_addnewfile = new Custom_Left_Buttom(false,false,false,true);
    this->_stackedWidget = new QStackedWidget();
    this->fileInfo = new WorkFile();
    this->_color = new ColorStyleSheet();
}
//Add main widgets
void MainWindow::Add_Elements()
{
    ui->LeftButtonsW->layout()->addWidget(_openbutton);
    ui->LeftButtonsW->layout()->addWidget(_savebutton);
    ui->LeftButtonsW->layout()->addWidget(_addnewfile);
    ui->SettingsW->layout()->addWidget(_settingbutton);
}
// Click to open button
void MainWindow::ClickedOpenButtom(WorkFile *e)
{
    if(e->Get_Suff() == "json")
    {
        if(e->Get_fullFileWay().isEmpty())
    {
        qDebug()<<"File_Way empty";
    }
        else if(ControlWidgetModule::CheckRepeat(e->Get_fullFileWay(),&_filesWay))
    {
        ControlWidgetModule::SetActiveWidget(e->Get_fullFileWay(),&_lastfiles);

         for(auto i = this->_lastfiles.begin();i < this->_lastfiles.end();i++)
         {
             if(i[0]->GetFullFileWay() == e->Get_fullFileWay())
             {
                 Last_Files_Widget * temp = i[0];
                  this->_stackedWidget->setCurrentWidget(temp->Get_Root());
                 this->_lastfiles.erase(i);
                 this->_lastfiles.push_front(temp);
             }
         }
         this->HideShowWidgets();
    }
        else
    {
        this->CheckOverFlow();
        Last_Files_Widget * lastw = new Last_Files_Widget(e->Get_fileName(),e->Get_wayWithOutFile(),e->Get_fullFileWay()," " + e->Get_TimeLastEdit() + " ");
        connect(lastw,&Last_Files_Widget::ClickToWidget,this,&MainWindow::ClickToWidgetLastFile);
        this->_lastfiles.push_front(lastw);
        this->_filesWay.push_front(e->Get_fullFileWay());
        this->UpdateWidgets(lastw);
        FirstLoadObject(ControlWidgetModule::OpenReadFile(e->Get_fullFileWay()), lastw);
    }
    }
    else if(e->Get_Suff()  == "xml")
    {
        if(e->Get_fullFileWay().isEmpty())
        {
            qDebug()<<"File_Way empty";
        }
        else if(ControlWidgetModule::CheckRepeat(e->Get_fullFileWay(),&_filesWay))
    {
        ControlWidgetModule::SetActiveWidget(e->Get_fullFileWay(),&_lastfiles);

         for(auto i = this->_lastfiles.begin();i < this->_lastfiles.end();i++)
         {
             if(i[0]->GetFullFileWay() == e->Get_fullFileWay())
             {
                 Last_Files_Widget * temp = i[0];
                  this->_stackedWidget->setCurrentWidget(temp->Get_Root());
                 this->_lastfiles.erase(i);
                 this->_lastfiles.push_front(temp);
             }
         }
         this->HideShowWidgets();
    }
        else
    {
            this->CheckOverFlow();
            Last_Files_Widget * lastw = new Last_Files_Widget(e->Get_fileName(),e->Get_wayWithOutFile(),e->Get_fullFileWay()," " + e->Get_TimeLastEdit() + " ");
            connect(lastw,&Last_Files_Widget::ClickToWidget,this,&MainWindow::ClickToWidgetLastFile);
            this->_lastfiles.push_front(lastw);
            this->_filesWay.push_front(e->Get_fullFileWay());
            this->UpdateWidgets(lastw);
            FirstLoadXML(ControlWidgetModule::OpenReadFileXML(e->Get_fullFileWay()), lastw);
    }
    }
    else
    {

    }
}
//Click to Not Active LastFileWidget
void MainWindow::ClickToWidgetLastFile(Last_Files_Widget *_last)
{
    for(auto i = this->_lastfiles.begin();i < this->_lastfiles.end();i++)
    {
       if(i[0] == _last)
       {
           i[0]->SetActiveStatus();
           Last_Files_Widget * temp = i[0];
           this->_lastfiles.erase(i);
           this->_lastfiles.push_front(temp);
           this->_stackedWidget->setCurrentWidget(_last->Get_Root());
       }
       else
       {
           i[0]->SetDisActiveStatus();
       }
    }
    this->HideShowWidgets();
}
//Update LastFileWidgets
void MainWindow::UpdateWidgets(Last_Files_Widget *_OpenFile)
{
    for(auto i = this->_lastfiles.begin();i < this->_lastfiles.end();i++)
    {
        if(i[0] == _OpenFile)
        {
            i[0]->SetActiveStatus();
        }
        else
        {
            i[0]->SetDisActiveStatus();
        }
        ui->LastFilesInW->layout()->addWidget(i[0]);
    }
}
//Update Widgets after Click
void MainWindow::HideShowWidgets()
{
    for(auto i = this->_lastfiles.begin();i < this->_lastfiles.end();i++)
    {
        ui->LastFilesInW->layout()->removeWidget(i[0]);
    }
    for(auto i = this->_lastfiles.begin();i < this->_lastfiles.end();i++)
    {
        ui->LastFilesInW->layout()->addWidget(i[0]);
    }

}
//Check OverFlow
void MainWindow::CheckOverFlow()
{
    if(this->_lastfiles.size() == 7)
    {
        for(auto i = this->_lastfiles.begin();i < this->_lastfiles.end();i++)
        {
            ui->LastFilesInW->layout()->removeWidget(i[0]);
        }
        this->_lastfiles.pop_back();
        this->_filesWay.pop_back();
        for(auto i = this->_lastfiles.begin();i < this->_lastfiles.end();i++)
        {
            ui->LastFilesInW->layout()->addWidget(i[0]);
        }
    }
    else
    {

    }
}
void MainWindow::FirstLoadXML(QDomDocument _doc, Last_Files_Widget * _last)
{
    this->_root = new xmladvancedobject();
    QWidget* _mainW = new QWidget();
    QScrollArea* _area = new QScrollArea();
    QWidget* _areascrollw = new QWidget();
    QWidget* _fW = new QWidget();
    QWidget* _sW = new QWidget();
     _mainW->setStyleSheet("background-color: rgb(47,49,54);");

    _mainW->setLayout(new QHBoxLayout());


    _area->setWidgetResizable(true);
    _area->setWidget(_areascrollw);
    _areascrollw->setLayout(new QVBoxLayout());


    _fW->setLayout(new QHBoxLayout());
    _fW->layout()->addWidget(_root);


    _sW->setLayout(new QHBoxLayout());
    _sW->layout()->setContentsMargins(0,0,0,0);
    _sW->layout()->addItem(new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Expanding));

    _areascrollw->layout()->addWidget(_fW);
    _areascrollw->layout()->addWidget(_sW);

    _mainW->layout()->addWidget(_area);
    _mainW->layout()->setContentsMargins(0,0,0,0);
    _fW->layout()->setContentsMargins(1,1,1,1);
    _areascrollw->layout()->setContentsMargins(0,0,0,0);


   this->_stackedWidget->addWidget(_mainW);
   _last->Set_Root(_mainW);
   _last->Set_Index(_stackedWidget->indexOf(_mainW));
   _stackedWidget->setCurrentWidget(_mainW);
    QDomElement taskElement = _doc.documentElement().firstChild().toElement();
    _root->LoadXML(taskElement);
}
void MainWindow::FirstLoadObject(QJsonObject _obj, Last_Files_Widget* last)
{
    this->_root = new AdvancedTypeWidget();
    QWidget* _mainW = new QWidget();
    QScrollArea* _area = new QScrollArea();
    QWidget* _areascrollw = new QWidget();
    QWidget* _fW = new QWidget();
    QWidget* _sW = new QWidget();
    _mainW->setStyleSheet("background-color: rgb(47,49,54);");
    _mainW->setLayout(new QHBoxLayout());


    _area->setWidgetResizable(true);
    _area->setWidget(_areascrollw);
    _areascrollw->setLayout(new QVBoxLayout());


    _fW->setLayout(new QHBoxLayout());
    _fW->layout()->addWidget(_root);


    _sW->setLayout(new QHBoxLayout());
    _sW->layout()->addItem(new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Expanding));

    _areascrollw->layout()->addWidget(_fW);
    _areascrollw->layout()->addWidget(_sW);

    _mainW->layout()->addWidget(_area);
    _mainW->layout()->setContentsMargins(0,0,0,0);
    _fW->layout()->setContentsMargins(1,1,1,1);
    _areascrollw->layout()->setContentsMargins(0,0,0,0);


   this->_stackedWidget->addWidget(_mainW);
   last->Set_Root(_mainW);
   last->Set_Index(_stackedWidget->indexOf(_mainW));
   _stackedWidget->setCurrentWidget(_mainW);
   _root->LoadObject(_obj);
}
void MainWindow::DisactMainWindow()
{

}
