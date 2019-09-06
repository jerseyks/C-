#ifndef __CLASS_H
#define __CLASS_H

#include<iostream>
#include<string.h>
using namespace std;
class String
{
    public:
        String()
        {
            p=NULL;
        }
        String(char *str);
        friend bool operator>(String &string1,String &string2);

        void display(void);
    private:
        char *p;
};





#endif/*__CLASS_H*/