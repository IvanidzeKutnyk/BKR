#include "mainwindow.h"
#include "main_set.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    //Space Settings
    //-Geometry
    w.setGeometry(w.main_set.Get_AX(),
                  w.main_set.Get_AY(),
                  w.main_set.Get_Width(),
                  w.main_set.Get_Height());
    w.setMinimumSize(w.main_set.Get_Width(),w.main_set.Get_Height());

    //Size
    w.setBaseSize(w.main_set.Get_Width(),w.main_set.Get_Height());

    //Start program
    w.show();

    return a.exec();
}
