#ifndef __CLASS_H
#define __CLASS_H

#include<iostream>
using namespace std;
class Student
{
    public:
        Student(int n,int a,float s):num(n),age(a),score(s){};
        void total(void);
        static float average(void);
    private:
        int num;
        int age;
        float score;
        static float sum;
        static int count;
};



#endif/*__CLASS_H*/