#include<class.h>

#include<iostream>
using namespace std;

void swap(int *p1,int *p2)  //把两个地址中的内容进行交换
{
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
    cout<<"*p1="<<*p1<<" "<<"*p2="<<*p2<<endl;
}

int main(void)
{
    int i=3,j=5;
    swap(&i,&j);        
    cout<<"i="<<i<<" "<<"j="<<j<<endl;


    return 0;
}

