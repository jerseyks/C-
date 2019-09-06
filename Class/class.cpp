#include<class.h>

Complex Complex::operator+(Complex &c2)
{
    return Complex(real+c2.real,imag+c2.imag);
}

ostream & operator<<(ostream &output,Complex &c)
{
    output<<"("<<c.real<<"+"<<c.imag<<"i)"<<endl;

    return output;
}




