#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "main_set.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    Main_Set main_set;
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    //Buttons

private:
    Ui::MainWindow *ui;
    void Set_Default_Settings();
};
#endif // MAINWINDOW_H
