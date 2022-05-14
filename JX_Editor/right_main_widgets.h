#ifndef RIGHT_MAIN_WIDGETS_H
#define RIGHT_MAIN_WIDGETS_H

#include "All_Libr.h"

class Right_Main_Widgets :public QWidget
{
public:
    Right_Main_Widgets();
    virtual QSize sizeHint() const override;
protected:
    virtual void paintEvent(QPaintEvent *) override;
    void addString(QString _name, QString _value);
    void addInt();
    void addFloat();

private:
    int _height;
    int _round;

};

#endif // RIGHT_MAIN_WIDGETS_H
