#ifndef ANALIZEJSONFILE_H
#define ANALIZEJSONFILE_H

//Library Start +++++++++++++++++++++++++++++++++++++++++++++
#include <QString>
#include <QFile>
#include <QJsonDocument>
#include <QDebug>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonValue>
//Library END +++++++++++++++++++++++++++++++++++++++++++++++

class AnalizeJsonFile
{
public:
    AnalizeJsonFile(QString);
private:
    QString _fullfileway;
    QString _fileinputdata;
    QJsonObject  _currentJsonObject;
    QJsonDocument _Jdoc;
private:
    void SetMemory();
    void OpenReadFile();
    void Analize(QJsonObject _obj);
};

#endif // ANALIZEJSONFILE_H
