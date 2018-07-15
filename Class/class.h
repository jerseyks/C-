#ifndef __CLASS_H
#define __CLASS_H
#include<iostream>
using namespace std;
class Box
{
    public:
        Box(int h=10,int w=10,int l=10);
        int volume();
    private:
        int height;
        int width;
        int length;
};


#endif/*__CLASS_H*/