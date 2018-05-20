#ifndef __CLASS_H
#define __CLASS_H
using namespace std;
class Box{
    public:
        Box(int,int,int);
        int volume(void);
    private:
        int height;
        int width;
        int length;
};


#endif/*__CLASS_H*/