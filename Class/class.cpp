#include<iostream>
#include<class.h>
Time::Time()
{
    hour=12;
    minute=11;
    sec=10;
}
void Time::set_time(void)
{
    cin>>hour;
    cin>>minute;
    cin>>sec;
}

void Time::show_time(void)
{
    cout<<hour<<":"<<minute<<":"<<sec<<endl;
}