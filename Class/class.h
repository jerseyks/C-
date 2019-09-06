#ifndef __CLASS_H
#define __CLASS_H

#include<iostream>
using namespace std;
class String
{
    public:
        String()
        {
            p=NULL;
        }
        String(char *str);
        void display(void);
    private:
        char *p;
};





#endif/*__CLASS_H*/