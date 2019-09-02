#ifndef __CLASS_H
#define __CLASS_H

#include<iostream>
using namespace std;
class Box
{
    public:
        Box(int h=10,int w=12,int len=15):height(h),width(w),length(len){};
        int volume(void);    
    private:
        int height;
        int width;
        int length;
};


#endif/*__CLASS_H*/