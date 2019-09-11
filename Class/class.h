#ifndef __CLASS_H
#define __CLASS_H

#include<iostream>
#include<string.h>
using namespace std;
class Point
{
    public:
        Point(){}
        virtual ~Point()
        {
            cout<<"executing Point destructor"<<endl;
        }
};


class Circle:public Point
{
    public:
        Circle(){}
        ~Circle()
        {
            cout<<"executing Circle destructor"<<endl;
        }
    private:
        int radus;
};




#endif/*__CLASS_H*/