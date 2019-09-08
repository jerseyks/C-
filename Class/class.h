#ifndef __CLASS_H
#define __CLASS_H

#include<iostream>
#include<string.h>
using namespace std;
class Student
{
    public:
        Student(int n,string nam)
        {
            num=n;
            name=nam;
        }
        void display(void)
        {
            cout<<"num: "<<num<<endl;
            cout<<"name: "<<name<<endl;
        }
    protected:
        int num;
        string name;
};

class Student1:public Student
{
    public:
        Student1(int n,string nam,int n1,string nam1,int a,string ad):Student(n,nam),monitor(n1,nam1)
        {
            age=a;
            addr=ad;
        }
        void show(void)
        {
            cout<<"this student is: "<<endl;
            display();
            cout<<"age: "<<age<<endl;
            cout<<"address: "<<addr<<endl<<endl;
        }
        void show_monitor(void)
        {
            cout<<endl<<"class monitor is: "<<endl;
            monitor.display();
        }
    private:
        Student monitor;
        int age;
        string addr;
};



#endif/*__CLASS_H*/