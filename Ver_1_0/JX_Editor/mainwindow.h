#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "main_set.h"
#include "All_Libr.h"

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
private:

    QStringList _file_ways;
    bool _statList;

    void OpenFilesWays();
    QVector<Last_Files_Widget*> leftwidgets;

public slots:
     void Clicked(QString _fname,QString _fway,QString _fABSway,QString _ftimeEdit);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
