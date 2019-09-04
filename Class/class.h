#ifndef __CLASS_H
#define __CLASS_H

#include<iostream>
using namespace std;
class Time
{
    public:
        Time(int,int,int);
        int hour;
        int minute;
        int sec;
};

Time::Time(int h,int m,int s)
{
    hour=h;
    minute=m;
    sec=s;
}

void fun(Time &t)
{
    t.hour=18;
}


#endif/*__CLASS_H*/