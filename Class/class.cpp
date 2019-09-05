#include<class.h>

void Student::total(void)
{
    sum+=score;
    count++;
}

float Student::average(void)
{
    return (sum/count);
}

float Student::sum=0;
int Student::count=0;








