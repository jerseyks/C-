#include<class.h>

Box::Box(int h,int w,int l)
{
    height = h;
    width = w;
    length = l;
}
int Box::volume(void)
{
    return (height*width*length);
}