#include "controlwidgetmodule.h"

ControlWidgetModule::ControlWidgetModule()
{

}
QJsonObject ControlWidgetModule::OpenReadFile(QString _filename)
{
    QFile _file(_filename);
    if(!_file.open(QIODevice::ReadOnly))
    {
        qDebug()<<"File Open Error";
    }
    QString _fileinputdata = _file.readAll();
    QJsonDocument _Jdoc = QJsonDocument::fromJson(_fileinputdata.toUtf8());
    QJsonObject _currentJsonObject = _Jdoc.object();
    _file.close();
    return _currentJsonObject;
}
QDomDocument ControlWidgetModule::OpenReadFileXML(QString _filename)
{
        QFile file(_filename);
        file.open(QIODevice::ReadOnly);
        QDomDocument document;
        document.setContent(&file);
        file.close();
        return document;
}
bool ControlWidgetModule::CheckRepeat(QString _fileway, QStringList* _filesWay)
{
    for(auto i = _filesWay->begin();i < _filesWay->end();i++)
    {
        if(i[0] == _fileway)
        {
            return true;
        }
        else
        {
            continue;
        }
    }
    return false;
}
void ControlWidgetModule::SetActiveWidget(QString _fileway, QVector<Last_Files_Widget*> *_lastfiles)
{
    for(auto i = _lastfiles->begin();i < _lastfiles->end();i++)
    {
        if(i[0]->GetFullFileWay() == _fileway)
        {
            i[0]->SetActiveStatus();
        }
        else
        {
            i[0]->SetDisActiveStatus();
        }
    }
}
