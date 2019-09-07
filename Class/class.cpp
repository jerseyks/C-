#include<class.h>


ostream & operator<<(ostream &output,Complex &c)
{
    output<<"("<<c.real<<"+"<<c.imag<<"i)"<<endl;

    return output;
}

istream & operator>>(istream &input,Complex &c)
{
    cout<<"input real part and imaginary part of complex number:";
    input>>c.real>>c.imag;

    return input;
}



