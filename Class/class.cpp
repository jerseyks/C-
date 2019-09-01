#include<class.h>

Box::Box(int h,int w,int len)
{
    height=h;
    width=w;
    length=len;
}

int Box::volume(void)
{
    return (height*width*length);
}