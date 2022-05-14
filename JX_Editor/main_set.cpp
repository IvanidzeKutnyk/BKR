#include "All_Libr.h"

Main_Set::Main_Set()
{
    //Main_Window
    this->ax = 50;
    this->ay = 50;
    this->height = 600;
    this->width = 1200;

}
int Main_Set::Get_AX(){return this->ax;}
int Main_Set::Get_AY(){return this->ay;}
int Main_Set::Get_Width(){return this->width;}
int Main_Set::Get_Height(){return this->height;}
