#include<class.h>


int main(void)
{
    Box box1;
    cout<<"The volume of box1 is "<<box1.volume()<<endl;
    Box box2(15);
    cout<<"The volume of box2 is "<<box2.volume()<<endl;
    Box box3(15,30);
    cout<<"The volume of box3 is "<<box3.volume()<<endl;
    Box box4(15,30,20);
    cout<<"The volume of box4 is "<<box4.volume()<<endl;

    return 0;
}



