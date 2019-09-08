#ifndef __CLASS_H
#define __CLASS_H

#include<iostream>
using namespace std;
class Student
{
    public:
        void get_value(void)
        {
            cin>>num>>name>>sex;
        }
        void display(void)
        {
            cout<<"num: "<<num<<endl;
            cout<<"name: "<<name<<endl;
            cout<<"sex: "<<sex<<endl;
        }
    private:
        int num;
        string name;
        char sex;
};

class Student1:private Student
{
    public:
        void get_value_1(void)
        {
            cin>>age>>addr;
        }
        void display_1(void)
        {
            cout<<"age: "<<age<<endl;
            cout<<"addr: "<<addr<<endl;
        }
    private:
        int age;
        string addr;
};



#endif/*__CLASS_H*/