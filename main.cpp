#include<class.h>
Box::Box()
{
    height = 10;
    width = 10;
    length = 10;
}
int main(void)
{
    Box box1;
    cout<<"The volume of box1 is "<<box1.volume()<<endl;
    Box box2(15,30,25);
    cout<<"The volume of box2 is "<<box2.volume()<<endl;
    return 0;
}