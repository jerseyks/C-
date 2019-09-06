#include<class.h>


Complex Complex::operator+(Complex &c2)
{
    Complex c;
    c.real=real+c2.real;
    c.imag=imag+c2.imag;

    return c;
}


void Complex::display(void)
{
    cout<<"("<<real<<","<<imag<<"i)"<<endl;
}






