#ifndef __CLASS_H
#define __CLASS_H

#include<iostream>
using namespace std;
template<class numtype>
class Compare
{
    public:
        Compare(numtype a,numtype b)
        {
            x=a;
            y=b;
        }
        numtype max(void)
        {
            return (x>y)?x:y;
        }
        numtype min(void)
        {
            return (x<y)?x:y;
        }
    private:
        numtype x,y;
};





#endif/*__CLASS_H*/