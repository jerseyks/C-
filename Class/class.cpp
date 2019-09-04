#include<class.h>

Box::Box(int w,int len)
{
    width=w;
    length=len;
}

int Box::volume(void)
{
    return (height*width*length);
}

int Box::height=10;


