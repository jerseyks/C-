#include<class.h>


int main(void)
{
    Box a(15,20),b(20,30);
    cout<<a.height<<endl;
    cout<<b.height<<endl;

    cout<<Box::height<<endl;
    cout<<a.volume();

    return 0;
}



