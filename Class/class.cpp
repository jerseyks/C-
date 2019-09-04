#include<class.h>

Time::Time(int h,int m,int s)
{
    hour=h;
    minute=m;
    sec=s;
}

void Time::get_time(void)
{
    cout<<hour<<":"<<minute<<":"<<sec<<endl;
}



