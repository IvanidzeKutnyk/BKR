#ifndef MAINWINDOW_H
#define MAINWINDOW_H
//Library Start +++++++++++++++++++++++++++++++++++++++++++++
#include <QMainWindow>
#include <QVector>
#include <QJsonObject>
#include "Widgets/custom_left_buttom.h"
#include "Widgets/last_files_widget.h"
#include "WorkWithFile/workfile.h"
#include "MainWidgetsLogic/mainwidgetexample.h"
#include <QStackedWidget>
#include <QScrollArea>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include "MainWidgetsLogic/advancedtypewidget.h"
#include "MainWidgetsLogic/singletypewidget.h"
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
    void FirstLoadObject(QJsonObject,Last_Files_Widget*);

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
    void HideShowWidgets();
    void CheckOverFlow();
    void SetFileWay(QString);
    QJsonObject OpenReadFile(QString);
    void ClearLayout();
private:
    Ui::MainWindow *ui;
    MainWidgetExample *_root;
    QStackedWidget *_stackedWidget;

public slots:
    void ClickedOpenButtom(WorkFile *);
    void ClickToWidgetLastFile(Last_Files_Widget *);
};
#endif // MAINWINDOW_H
