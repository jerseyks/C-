#include<iostream>
using namespace std;
class Student{
    private:
        int num;
        float score;
    public:
        void setdate()
        {
            cin>>num;
            cin>>score;
        };
        void display()
        {
            cout<<"num = "<<num<<endl;
            cout<<"score = "<<score<<endl;
        };
};

class Student stu1,stu2;
int main(void)
{
    stu1.setdate();
    stu2.setdate();

    stu1.display();
    stu2.display();
    
    return 0;
}