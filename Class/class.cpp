#include<class.h>

Time::Time(int h,int m,int s)
{
    hour=h;
    minute=m;
    sec=s;
}

void display(Time &t)
{
    cout<<t.hour<<":"<<t.minute<<":"<<t.sec<<endl;
}







