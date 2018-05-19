#include<iostream>
using namespace std;
int main(void)
{
    int a=10;
    int &b=a;
    a=a*a;
    cout<<a<<" "<<b<<endl;;
    b=b/5;
    cout<<b<<" "<<a<<endl;;
    return 0;
}