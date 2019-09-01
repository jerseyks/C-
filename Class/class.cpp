#include<class.h>

Box::Box()
{
    height=10;
    width=10;
    length=10;
}

int Box::volume(void)
{
    return (height*width*length);
}