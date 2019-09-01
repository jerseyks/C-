#ifndef __CLASS_H
#define __CLASS_H
#include<string>
#include<iostream>
using namespace std;
class Student
{
    public:
        Student(int n,string nam,char s)                //注意声明和定义的区别,声明有分号,定义没有分号结尾.
        {
            num=n;
            name=nam;
            sec=s;
            cout<<"Constructor called."<<endl;
        }
        ~Student()
        {
            cout<<"Destructor called."<<endl;
        }
        void display(void)
        {
            cout<<"num: "<<num<<endl;
            cout<<"name: "<<name<<endl;
            cout<<"sec: "<<sec<<endl;
        }
    private:
        int num;
        string name;
        char sec;
};


#endif/*__CLASS_H*/