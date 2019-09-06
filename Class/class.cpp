#include<class.h>

Time Time::operator++(void)
{
    if(++sec>=60)
    {
        sec-=60;
        ++minute;
    }
    return *this;
}



