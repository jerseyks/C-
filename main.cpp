#include<class.h>

#include<iostream>
using namespace std;

class Student
{
    private:
        int num;
        float score;
    public:
        void setdata(void)
        {
            cin>>num;
            cin>>score;
        };
        void display(void)
        {
            cout<<"num="<<num<<endl;
            cout<<"score="<<score<<endl;
        };
};

Student stud1,stud2;
int main(void)
{
    stud1.setdata();
    stud2.setdata();
    stud1.display();
    stud2.display();

    return 0;
}


