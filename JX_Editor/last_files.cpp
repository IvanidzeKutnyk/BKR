#include "last_files.h"

Last_Files::Last_Files()
{

}
Last_Files::Last_Files(QString _name, int _id)
{
    this->_name = _name;
    this->_ID = _id;
}
void Last_Files::Set_ID(int _id)
{
    this->_ID = _id;
}
int Last_Files::Get_ID()
{
    return this->_ID;
}
void Last_Files::Set_Name(QString _name)
{
    this->_name = _name;
}
QString Last_Files::Get_Name()
{
    return this->_name;
}
