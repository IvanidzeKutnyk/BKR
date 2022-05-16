#ifndef MAINWINDOW_H
#define MAINWINDOW_H
//Library Start +++++++++++++++++++++++++++++++++++++++++++++
#include <QMainWindow>
#include <QVector>
#include "custom_left_buttom.h"
#include "last_files_widget.h"
#include "workfile.h"
//Library END +++++++++++++++++++++++++++++++++++++++++++++++
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void Set_Mamory();
    void Add_Elements();

private:
    // custom_left_buttom
    Custom_Left_Buttom *_openbutton;
    Custom_Left_Buttom *_savebutton;
    Custom_Left_Buttom *_settingbutton;
    WorkFile *fileInfo;
    QVector<Last_Files_Widget*> _lastfiles;
    QStringList _filesWay;
private:
    void UpdateWidgets(Last_Files_Widget *);
    bool CheckRepeat(QString);
    void SetActiveWidget(QString);
private:
    Ui::MainWindow *ui;

public slots:
    void ClickedOpenButtom(WorkFile *);
    void ClickToWidgetLastFile(Last_Files_Widget *);
};
#endif // MAINWINDOW_H