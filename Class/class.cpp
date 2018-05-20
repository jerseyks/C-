#include<iostream>
#include<class.h>
void Array_max::set_value(void)
{
    int i;
    for(i=0;i<10;i++)
        cin>>array[i];
}
void Array_max::max_value(void)
{
    int i;
    max=array[0];
    for(i=0;i<10;i++)
    {
        if(array[i]>=max)
            max=array[i];
    }
}
void Array_max::show_value(void)
{
    cout<<"max="<<max<<endl;
}