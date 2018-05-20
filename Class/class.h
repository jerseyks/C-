#ifndef __CLASS_H
#define __CLASS_H
using namespace std;
class Time{
    public:
        Time();
        void set_time(void);
        void show_time(void);
    private:
        int hour;
        int minute;
        int sec;
};


#endif/*__CLASS_H*/