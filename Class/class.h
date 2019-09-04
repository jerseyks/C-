#ifndef __CLASS_H
#define __CLASS_H

#include<iostream>
using namespace std;
class Box
{
    public:
        Box(int w ,int len);
        int volume(void);
        static int height;
        int width;
        int length;
};



#endif/*__CLASS_H*/