#ifndef __CLASS_H
#define __CLASS_H

#include<iostream>
#include<string.h>
using namespace std;
class Student
{
    public:

    protected:
        int num;
        string name;
        char sex;
};

class Student1:protected Student
{
    public:
        void get_value1(void);
        void display1(void);
    private:
        int age;
        string addr;
};



#endif/*__CLASS_H*/