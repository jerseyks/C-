#ifndef __CLASS_H
#define __CLASS_H
using namespace std;
class Time{
    public:
        Time()
        {
            hour=0;
            minute=0;
            sec=0;
        };
        void set_time(void);
        void show_time(void);
    private:
        int hour;
        int minute;
        int sec;
};


#endif/*__CLASS_H*/