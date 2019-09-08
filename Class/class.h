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
        Student1(int n,string nam,int a):Student(n,nam)
        {
            age=a;           
        }
        void show(void)
        {
            display();
            cout<<"age: "<<age<<endl;
        }
    private:
        int age;
};

class Student2:public Student1
{
    public:
        Student2(int n,string nam,int a,int s):Student1(n,nam,a)
        {
            score=s;           
        }
        void show_all(void)
        {
            show();
            cout<<"score: "<<score<<endl;
        }
    private:
        int score;
};






#endif/*__CLASS_H*/