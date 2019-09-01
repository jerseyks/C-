#include<class.h>

#include<iostream>
#include<string>
using namespace std;


int main(void)
{
    string string1,string2,string3,temp;        //由小到大输出
    cout<<"please input three string:"<<endl;
    cin>>string1>>string2>>string3;
    if(string2>string3)     //使串2<=串3     //2小3大
    {
        temp=string2;
        string2=string3;
        string3=temp;
    }
    if(string1<=string2)    //串1<串2，则串1<串2<串3
    {
        cout<<string1<<" "<<string2<<" "<<string3<<endl;
    }else   //串2<串1，串2<串3
        {
            if(string1<=string3)    //串2<串1<串3
            {
                cout<<string2<<" "<<string1<<" "<<string3<<endl;
            }else   //串2<串3<串1
                {
                    cout<<string2<<" "<<string3<<" "<<string1<<endl;
                }
        }
    
    

    return 0;
}

