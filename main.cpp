#include<class.h>


int main(void)
{
    Time t1(10,13,56);

    int* p1=&t1.hour;
    cout<<*p1<<endl;
    t1.get_time();

    Time* p2=&t1;
    p2->get_time();

    void (Time::* p3)();        //函数指针,本质上是指针
    p3=&Time::get_time;         //用该指针来指向函数
    (t1.*p3)();

    return 0;
}



