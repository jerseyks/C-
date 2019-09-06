#ifndef __CLASS_H
#define __CLASS_H

#include<iostream>
using namespace std;
class Complex
{
    public:
        Complex()
        {
            real=0;
            imag=0;
        }
        Complex(double r,double i)
        {
            real=r;
            imag=i;
        }
        Complex operator+(Complex &c2);
        void display(void);
    private:
        double real;
        double imag;
};






#endif/*__CLASS_H*/