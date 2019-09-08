#ifndef __CLASS_H
#define __CLASS_H

#include<iostream>
#include<string.h>
using namespace std;
class Point
{
    public:
        Point(float x=0,float y=0);
        void setPoint(float,float);
        float getX(void) const
        {
            return x;
        }
        float getY(void) const
        {
            return y;
        }
        friend ostream &operator<<(ostream &,const Point &);
    protected:
        float x,y;
};

Point::Point(float a,float b)
{
    x=a;
    y=b;
}

void Point::setPoint(float a,float b)
{
    x=a;
    y=b;
}

ostream &operator<<(ostream &output,const Point &p)
{
    output<<"["<<p.x<<","<<p.y<<"]"<<endl;
    return output;
}


#endif/*__CLASS_H*/