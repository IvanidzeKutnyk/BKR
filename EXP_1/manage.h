#ifndef MANAGE_H
#define MANAGE_H
#include"Glob_Define.h"

class Manage
{
private:
    QStringList names;
    QJsonObject currentJsonObject_;
public:
    Manage();

    QJsonObject GetOBJ();

    QString Return_Way(bool _st);
    void Translate();
    void Test(QJsonObject _obj);

    void Arr_AN();
};

#endif // MANAGE_H
