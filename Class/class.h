#ifndef __CLASS_H
#define __CLASS_H

#include<iostream>
using namespace std;
class Date;
class Time
{
    public:
        Time(int,int,int);
        void display(Date &);
    private:
        int hour;
        int minute;
        int sec;
};

class Date
{
    public:
        Date(int,int,int);
        friend void Time::display(Date &);
    private:
        int month;
        int day;
        int year;
};






#endif/*__CLASS_H*/