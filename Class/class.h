#ifndef __CLASS_H
#define __CLASS_H

#include<iostream>
#include<string.h>
using namespace std;
class Student
{
    public:
        Student(int,string,float);
        void display(void);
    private:
        int num;
        string name;
        float score;
};

Student::Student(int n,string nam,float s)
{
    num=n;
    name=nam;
    score=s;
}


void Student::display(void)
{
    cout<<endl<<"num: "<<num<<endl;
    cout<<"name: "<<name<<endl;
    cout<<"score: "<<score<<endl;
}


class Graduate:public Student
{
    public:
        Graduate(int,string,float,float);
        void display(void);
    private:
        float wage;
};

Graduate::Graduate(int n,string nam,float s,float w):Student(n,nam,s),wage(w)
{

}

void Graduate::display(void)
{
    Student::display();
    cout<<"wage: "<<wage<<endl;
}


#endif/*__CLASS_H*/