#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Glob_Define.h"
#include"manage.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    mng.Return_Way(true);
}


void MainWindow::on_pushButton_2_clicked()
{
    mng.Translate();
    mng.Test(mng.GetOBJ());
}
