#ifndef __CLASS_H
#define __CLASS_H

#include<iostream>
using namespace std;
class Time
{
    public:
        Time(int,int,int);
        friend void display(Time &);
    private:
        int hour;
        int minute;
        int sec;
};





#endif/*__CLASS_H*/