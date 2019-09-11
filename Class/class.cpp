#include<class.h>
Student::Student(int n,string nam,float s)
{
    num=n;
    name=nam;
    score=s;
}

void Student::display(void)
{
    cout<<"num:"<<num<<"\nname:"<<name<<"\nscore:"<<score<<"\n\n";
}


Graduate::Graduate(int n,string nam,float s,float w):Student(n,nam,s),wage(w){}

void Graduate::display(void)
{
    cout<<"num:"<<num<<"\nname:"<<name<<"\nscore:"<<score<<"\nwage="<<wage<<endl;
}










