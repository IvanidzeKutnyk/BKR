#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->Set_Mamory();
    connect(_openbutton,&Custom_Left_Buttom::SendFileInfoAfterClick,this,&MainWindow::ClickedOpenButtom);
    this->Add_Elements();
}

MainWindow::~MainWindow()
{
    delete ui;
}
//Set Memory to widgets
void MainWindow::Set_Mamory()
{
    this->_openbutton = new Custom_Left_Buttom(false,true,false); //Open Button
    this->_savebutton = new Custom_Left_Buttom(true,false,false); //Save Button
    this->_settingbutton = new Custom_Left_Buttom(false,false,true);
    this->fileInfo = new WorkFile();
}
//Add main widgets
void MainWindow::Add_Elements()
{
    ui->LeftButtonsW->layout()->addWidget(_openbutton);
    ui->LeftButtonsW->layout()->addWidget(_savebutton);
    ui->SettingsW->layout()->addWidget(_settingbutton);
}
// Click to open button
void MainWindow::ClickedOpenButtom(WorkFile *e)
{
    if(e->Get_fullFileWay().isEmpty())
    {

    }
    else if(this->CheckRepeat(e->Get_fullFileWay()))
    {
        this->SetActiveWidget(e->Get_fullFileWay());
         for(auto i = this->_lastfiles.begin();i < this->_lastfiles.end();i++)
         {
             if(i[0]->GetFullFileWay() == e->Get_fullFileWay())
             {
                 Last_Files_Widget * temp = i[0];
                 this->_lastfiles.erase(i);
                 this->_lastfiles.push_front(temp);
             }
         }
         this->HideShowWidgets();
    }
    else
    {
        Last_Files_Widget * lastw = new Last_Files_Widget(e->Get_fileName(),e->Get_wayWithOutFile(),e->Get_fullFileWay()," " + e->Get_TimeLastEdit() + " ");
        connect(lastw,&Last_Files_Widget::ClickToWidget,this,&MainWindow::ClickToWidgetLastFile);
        this->_lastfiles.push_front(lastw);
        this->_filesWay.push_front(e->Get_fullFileWay());
        this->UpdateWidgets(lastw);
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
//CheckRepeats
bool MainWindow::CheckRepeat(QString _fileway)
{
    for(auto i = this->_filesWay.begin();i < this->_filesWay.end();i++)
    {
        if(i[0] == _fileway)
        {
            return true;
        }
        else
        {
            continue;
        }
    }
    return false;
}
// SetAciveWidget
void MainWindow::SetActiveWidget(QString _fileway)
{
    for(auto i = this->_lastfiles.begin();i < this->_lastfiles.end();i++)
    {
        if(i[0]->GetFullFileWay() == _fileway)
        {
            i[0]->SetActiveStatus();
        }
        else
        {
            i[0]->SetDisActiveStatus();
        }
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
