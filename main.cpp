#include<class.h>


int main(void)
{               
    Student stud1(1001,"Li",97.5);
    Graduate grad1(2001,"Wang",98.5,1000);
    Student *pt=&stud1;
    pt->display();
    pt=&grad1;
    pt->display();

    return 0;
}



