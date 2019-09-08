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

class Circle:public Point
{
    public:
        Circle(float x=0,float y=0,float r=0);
        void setRadius(float);
        float getRadius(void) const;
        float area(void) const;
        friend ostream &operator<<(ostream &,const Circle &);
    private:
        float radius;
};

Circle::Circle(float a,float b,float r):Point(a,b),radius(r)
{

}

void Circle::setRadius(float r)
{
    radius=r;
}

float Circle::getRadius(void) const
{
    return radius;
}


float Circle::area(void) const
{
    return 3.14159*radius*radius;
}

ostream &operator<<(ostream &output,const Circle &c)
{
    output<<"Center=["<<c.x<<","<<c.y<<"],r="<<c.radius<<",area="<<c.area()<<endl;

    return output;
}



#endif/*__CLASS_H*/