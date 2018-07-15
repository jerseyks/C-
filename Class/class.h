#ifndef __CLASS_H
#define __CLASS_H
#include<iostream>
using namespace std;
class Box
{
    public:
        Box();
        Box(int,int,int);
        int volume(void);
    private:
        int height;
        int width;
        int length;
};


#endif/*__CLASS_H*/