#include<iostream>
#include<class.h>

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