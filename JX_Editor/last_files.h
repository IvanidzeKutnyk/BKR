#ifndef LAST_FILES_H
#define LAST_FILES_H

#include <QString>
#include <QWidget>

class Last_Files : public QWidget
{
public:
    Last_Files();
    Last_Files(QString _name, int _id);
    QString Get_Name();
    void Set_Name(QString _name);

    int Get_ID();
    void Set_ID(int _id);
private:
    QString _name;
    int _ID;
};

#endif // LAST_FILES_H
