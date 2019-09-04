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
        void get_time(void);
};


#endif/*__CLASS_H*/