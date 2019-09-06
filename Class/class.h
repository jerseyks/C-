#ifndef __CLASS_H
#define __CLASS_H

#include<iostream>
using namespace std;
class Time
{
    public:
        Time()
        {
            minute=0;
            sec=0;
        }
        Time(int m,int s):minute(m),sec(s){};//; //有无;号都可以.

        Time operator++(void);
        Time operator++(int);

        void display(void)
        {
            cout<<minute<<":"<<sec<<endl;
        }
    private:
        int minute;
        int sec;
};





#endif/*__CLASS_H*/