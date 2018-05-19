#include<iostream>
#include<string>
using namespace std;
string name[10];
int main(void)
{
    string st1,st2,st3,temp;
    cout<<"please input three strings:";
    cin>>st1>>st2>>st3;
    if(st2>st3) 
    {
        temp=st2;
        st2=st3;
        st3=temp;
    }
    if(st1<=st2)
    {
        cout<<st1<<" "<<st2<<" "<<st3<<endl;
    }
    else if(st1<=st3)
        {
            cout<<st2<<" "<<st1<<" "<<st3<<endl;
        }
        else
        {
            cout<<st2<<" "<<st3<<" "<<st1<<endl;
        }

    cout<<"the size of string="<<sizeof(string)<<endl;
    cout<<"the size of name="<<sizeof(name)<<endl;
    return 0;
}