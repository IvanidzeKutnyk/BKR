#include "All_Libr.h"
#include "ui_mainwindow.h"




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    Main_Set m_set;
    Custom_Left_Buttom *open_B= new Custom_Left_Buttom(false,true);
    Custom_Left_Buttom *save_B = new Custom_Left_Buttom(true,false);
    ToggleButton *lightdark = new ToggleButton();
    Right_Main_Widgets *r = new Right_Main_Widgets();
    this->_statList = false;
    ui->setupUi(this);
    ui->Button->layout()->addWidget(open_B);
    ui->Button->layout()->addWidget(save_B);
    ui->L_D_W->layout()->addWidget(lightdark);
    ui->Out_Info_W->layout()->addWidget(r);

    connect(open_B,&Custom_Left_Buttom::Clicked,this,&MainWindow::Clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::Clicked(QString _fname,QString _fway,QString _fABSway,QString _ftimeEdit)
{
    int a = 0;
    for (auto i = this->_file_ways.begin();i < this->_file_ways.end();i++ )
    {
        //_file_ways.
        if(a >= 10){break;}
        if(i[a] == _fABSway)
        {
            this->_statList = true;
            qDebug()<<"In array";
            break;
        }
        a++;
    }
    if(!this->_statList)
    {
    Last_Files_Widget *lastf1 = new Last_Files_Widget(_fname,_fway,_fABSway,_ftimeEdit);
    ui->Last_Files_W->layout()->addWidget(lastf1);

    this->leftwidgets.push_back(lastf1);
    this->_file_ways.append(_fway);
    }
}

void MainWindow::OpenFilesWays()
{

}
