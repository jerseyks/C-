#include<class.h>

#include<iostream>
using namespace std;

void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"a="<<a<<" "<<"b="<<b<<endl;
}

int main(void)
{
    int i=3,j=5;
    swap(i,j);
    cout<<"i="<<i<<" "<<"j="<<j<<endl;


    return 0;
}

