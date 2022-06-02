#ifndef WORKFILE_H
#define WORKFILE_H

//Library Start +++++++++++++++++++++++++++++++++++++++++++++
#include <QFileInfo>
#include <QDateTime>
#include <QString>
#include <QFileDialog>
#include <QDebug>
//Library END +++++++++++++++++++++++++++++++++++++++++++++++

class WorkFile : public QObject
{
    Q_OBJECT
public:
    WorkFile();
    void OpenFile();
     QString Get_fullFileWay();
     QString Get_wayWithOutFile();
     QString Get_fileName();
     QString Get_TimeLastEdit();
     QString Get_Suff();
     void readinfo();
     void SetFullFileWay(QString);
private:
    QString _fullFileWay;
    QString _suff;
    QString _wayWithOutFile;
    QString _fileName;
    QString _TimeLastEdit;
private:
    void GetInfoFile();
};

#endif // WORKFILE_H
