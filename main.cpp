#include<class.h>


int main(void)
{               
    Student stdu1(1001,"Li",87.5);
    Graduate grad1(2001,"wang",98.5,1200);
    Student *pt=&stdu1;
    pt->display();
    pt=&grad1;
    pt->display();

    Graduate *p=&grad1;
    p->display();

    return 0;
}



