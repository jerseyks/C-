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
    protected:
        int num;
        string name;
        float score;
};

class Graduate:public Student
{
    public:
        Graduate(int,string,float,float);
        void display(void);
    private:
        float wage;
};




#endif/*__CLASS_H*/