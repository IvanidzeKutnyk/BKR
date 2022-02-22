#include "manage.h"

Manage::Manage()
{

}
QString Manage::Return_Way(bool _st)
{
    QString str;
    if(_st == true)
    {
        str = QFileDialog::getOpenFileName(0, "Відкрити", "", "Json file (*.json)");
        names.append(str);
        qDebug()<<str;
        return str;
    }
    else
    {
        return "";
    }
}

QJsonObject Manage::GetOBJ(){
    return this->currentJsonObject_;
}

void Manage:: Translate()
{
QFile file(names[0]);
if(!file.open(QIODevice::ReadOnly)){
    qDebug() << "Ошибка при открытии файла";
}

QString data_og = file.readAll();
QJsonDocument Jdoc = QJsonDocument::fromJson(data_og.toUtf8());
currentJsonObject_ = Jdoc.object();
file.close();
}

void Manage::Test( QJsonObject _obj){
for(auto _itb = _obj.begin();_itb != _obj.end();_itb++)
{
 if(_itb.value().isBool()) // (1)
  {
     qDebug()<< "BOOL"<< _itb.key()<<" -- "<<_itb.value().toBool();
 }
 else if(_itb.value().isDouble()) // (2)
  {
     qDebug()<< "DOUBLE"<< _itb.key()<<" -- "<<_itb.value().toDouble();
 }
 else if(_itb.value().isString()) // (3)
 {
     qDebug()<< "STRING"<< _itb.key()<<" -- "<<_itb.value().toString();
 }
 else if(_itb.value().isArray()) // (4)
 {
     //QJsonArray arr = _itb.value().toArray();
     //QJsonObject nextOBJ = _itb.value().toObject();
     qDebug()<<currentJsonObject_;
     //qDebug()<<_itb.value();
     //Test(nextOBJ);
 }
 else if(_itb.value().isObject()) // 5)
 {}

   }

}



