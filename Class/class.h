#ifndef __CLASS_H
#define __CLASS_H

#include<iostream>
#include<string.h>
using namespace std;
class Student
{
    public:
        Student(int n,string nam,char s)
        {
            num=n;
            name=nam;
            sex=s;
        }
        ~Student()
        {

        }
    protected:
        int num;
        string name;
        char sex;
};

class Student1:public Student
{
    public:
        Student1(int n,string nam,char s,int a,string ad):Student(n,nam,s)
        {
            age=a;
            addr=ad;
        }
        void show(void)
        {
            cout<<"num: "<<num<<endl;
            cout<<"name: "<<name<<endl;
            cout<<"sex: "<<sex<<endl;
            cout<<"age: "<<age<<endl;
            cout<<"address: "<<addr<<endl<<endl;
        }
        ~Student1()
        {
            
        }
    private:
        int age;
        string addr;
};



#endif/*__CLASS_H*/