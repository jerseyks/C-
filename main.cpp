#include<class.h>

#include<iostream>
using namespace std;
class Time
{
    public:
        int hour;
        int minute;
        int sec;
};

int main(void)
{
    void set_time(Time &t,int hour=0,int minute=0,int sec=0);       //函数声明
    void show_time(Time &t);

    Time t1;
    set_time(t1,12,23,34);
    show_time(t1);
    Time t2;
    set_time(t2);
    show_time(t2);

    return 0;
}

void set_time(Time &t,int hour,int minute,int sec)      //定义函数时不必再制定默认参数
{
    t.hour=hour;
    t.minute=minute;
    t.sec=sec;
}
void show_time(Time &t)
{
    cout<<t.hour<<":"<<t.minute<<":"<<t.sec<<endl;
}

