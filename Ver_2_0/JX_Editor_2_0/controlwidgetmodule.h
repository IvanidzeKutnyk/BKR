#ifndef CONTROLWIDGETMODULE_H
#define CONTROLWIDGETMODULE_H
//Library Start +++++++++++++++++++++++++++++++++++++++++++++
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonValue>
#include <QFile>
#include <QWidget>
#include <QVector>
#include <QDomDocument>
#include "Widgets/last_files_widget.h"
//Library END +++++++++++++++++++++++++++++++++++++++++++++

class ControlWidgetModule
{
private:
       ControlWidgetModule();
       ~ControlWidgetModule();
       ControlWidgetModule(const ControlWidgetModule&) = delete;
       ControlWidgetModule& operator=(const ControlWidgetModule&) = delete;
public:

   static QJsonObject OpenReadFile(QString);
   static QDomDocument OpenReadFileXML(QString);
   static bool CheckRepeat(QString, QStringList *);
   static void SetActiveWidget(QString, QVector<Last_Files_Widget*> *);
};

#endif // CONTROLWIDGETMODULE_H
