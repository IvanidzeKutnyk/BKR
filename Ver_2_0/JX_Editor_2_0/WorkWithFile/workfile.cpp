#include "workfile.h"

WorkFile::WorkFile()
{
    this->_fullFileWay = "";
    this->_fileName = "";
    this->_TimeLastEdit = "";
    this->_wayWithOutFile = "";
}
void WorkFile::OpenFile()
{
    this->_fullFileWay = QFileDialog::getOpenFileName(0, "Відкрити", "", "Json files (*.json);;XML files (*.xml)");
    this->GetInfoFile();
}
void WorkFile::GetInfoFile()
{
    QFileInfo fi(this->_fullFileWay);
    this->_fileName = fi.baseName(); //_fileName
    this->_wayWithOutFile = fi.absolutePath(); //_wayWithOutFile
    QString apt = fi.lastModified().toString();
    this->_TimeLastEdit = apt; //_wayWithOutFile
    this->_suff = fi.suffix();
}
QString WorkFile::Get_TimeLastEdit(){return this->_TimeLastEdit;}
QString WorkFile::Get_fileName(){return this->_fileName;};
QString WorkFile::Get_wayWithOutFile(){return this->_wayWithOutFile;};
QString WorkFile::Get_fullFileWay(){return this->_fullFileWay;};
QString WorkFile::Get_Suff(){return this->_suff;};
void WorkFile::readinfo()
{
    GetInfoFile();
}
void WorkFile::SetFullFileWay(QString _fileWay)
{
    this->_fullFileWay = _fileWay;
}
