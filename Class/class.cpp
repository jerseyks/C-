#include<class.h>



Complex operator+(Complex c1,Complex c2)
{
    return Complex(c1.real+c2.real,c1.imag+c2.imag);
}

void Complex::display(void)
{
    cout<<"("<<real<<","<<imag<<"i)"<<endl;
}








