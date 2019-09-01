#include<class.h>

#include<iostream>
using namespace std;
class Time
{
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

void Time::set_time(void)
{
    cin>>hour;
    cin>>minute;
    cin>>sec;
}
void Time::show_time(void)
{
    cout<<hour<<":"<<minute<<":"<<sec<<endl;
}

int main(void)
{
    Time t1;
    t1.set_time();
    t1.show_time();
    
    Time t2;
    t2.set_time();
    t2.show_time();
    
    return 0;
}






