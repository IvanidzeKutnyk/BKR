#include "analizejsonfile.h"

AnalizeJsonFile::AnalizeJsonFile(QString _fullfileway)
{
    this->_fullfileway = _fullfileway;
    this->SetMemory();
    this->OpenReadFile();
    this->Analize(this->_currentJsonObject);
}
void AnalizeJsonFile::SetMemory(){}
void AnalizeJsonFile::OpenReadFile()
{
    QFile _file(this->_fullfileway);
    if(!_file.open(QIODevice::ReadOnly))
    {
        qDebug()<<"File Open Error";
    }
    this->_fileinputdata = _file.readAll();
    this->_Jdoc = QJsonDocument::fromJson(this->_fileinputdata.toUtf8());
    this->_currentJsonObject = this->_Jdoc.object();
    _file.close();
}
void AnalizeJsonFile::Analize(QJsonObject _obj)
{
    for(auto _ita = _obj.begin(); _ita != _obj.end(); _ita++)
    {
        //qDebug()<<"     "<<_ita.key();
        if(_ita.value().isBool())
         {
            qDebug()<<_ita.key()<<" "<<_ita.value();
        }
        else if(_ita.value().isDouble())
         {
            qDebug()<<_ita.key()<<" "<<_ita.value();
        }
        else if(_ita.value().isString())
        {
            qDebug()<<_ita.key()<<" "<<_ita.value();
        }
        else if(_ita.value().isArray()) // (4)
        {
            qDebug()<<_ita.key()<<"arr ----Start";
            QJsonObject ab;
            QJsonArray arr = _ita.value().toArray();
            //qDebug()<<arr;
             for(auto tb = arr.begin(); tb != arr.end();tb++)
             {
                 ab =  tb->toObject();
                 Analize(ab);

             }
            qDebug()<<_ita.key()<<"arr ----End";
        }
        else if(_ita.value().isObject())
        {
            qDebug()<<_ita.key()<<"Obj ----Start";
            Analize(_ita.value().toObject());
            qDebug()<<_ita.key()<<"Obj ----END";
        }
    }
}
