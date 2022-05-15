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
void MainWindow::Set_Mamory()
{
    this->_openbutton = new Custom_Left_Buttom(false,true,false); //Open Button
    this->_savebutton = new Custom_Left_Buttom(true,false,false); //Save Button
    this->_settingbutton = new Custom_Left_Buttom(false,false,true);
    this->last = new Last_Files_Widget("","","","");
    this->fileInfo = new WorkFile();
}
void MainWindow::Add_Elements()
{
    ui->LeftButtonsW->layout()->addWidget(_openbutton);
    ui->LeftButtonsW->layout()->addWidget(_savebutton);
    ui->SettingsW->layout()->addWidget(_settingbutton);
    ui->LastFilesInW->layout()->addWidget(last);

}
void MainWindow::ClickedOpenButtom(WorkFile *e)
{
    //(QString _name, QString _way,QString _wayABS, QString _time)
    Last_Files_Widget * lastw = new Last_Files_Widget(e->Get_fileName(),e->Get_wayWithOutFile(),e->Get_fullFileWay()," " + e->Get_TimeLastEdit() + " ");
    ui->ActiveFileW->layout()->addWidget(lastw);
}
