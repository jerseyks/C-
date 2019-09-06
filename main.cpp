#include<class.h>


int main(void)
{
    Time time1(34,0);

    for(int i=0;i<61;i++)
    {
        ++time1;
        time1.display();
    }

    return 0;
}



