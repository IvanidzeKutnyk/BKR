#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "custom_left_buttom.h"
#include "togglebutton.h"
#include "last_files_widget.h"
#include "right_main_widgets.h"




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    Main_Set m_set;
    Custom_Left_Buttom *open_B= new Custom_Left_Buttom(false,true);
    Custom_Left_Buttom *save_B = new Custom_Left_Buttom(true,false);
    ToggleButton *lightdark = new ToggleButton();
    Last_Files_Widget *lastf1 = new Last_Files_Widget("Hello","My Friend","0000");
    Last_Files_Widget *lastf2 = new Last_Files_Widget("Noope","Lool","1111");
    Right_Main_Widgets *r = new Right_Main_Widgets();

    ui->setupUi(this);
    ui->Button->layout()->addWidget(open_B);
    ui->Button->layout()->addWidget(save_B);
    ui->L_D_W->layout()->addWidget(lightdark);
    ui->Last_Files_W->layout()->addWidget(lastf1);
    ui->Last_Files_W->layout()->addWidget(lastf2);
    ui->Out_Info_W->layout()->addWidget(r);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Set_Default_Settings(){

}

//Set_Buttons


