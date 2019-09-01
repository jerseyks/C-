#include<class.h>

#include<iostream>
using namespace std;

class Array_may
{
    public:
        void set_value(void);
        void max_value(void);
        void show_value(void);
    private:
        int array[10];
        int max;
};


void Array_may::set_value(void)
{
    int i;
    for(i=0;i<10;i++)
    {
        cin>>array[i];
    }
}

void Array_may::max_value(void)
{
    int i;
    max=array[0];
    for(i=0;i<10;i++)
    {
        if(max<array[i])
            max=array[i];
    }
}

void Array_may::show_value(void)
{
    cout<<"max="<<max<<endl;
}

int main(void)
{
    Array_may arrmax;

    arrmax.set_value();
    arrmax.max_value();
    arrmax.show_value();

    return 0;
}


