#include<class.h>


String::String(char *str)
{
    p=str;
}


void String::display(void)
{
    cout<<p;
}

bool operator>(String &string1,String &string2)
{
    if(strcmp(string1.p,string2.p)>0)
        return true;
    else
        return false;
}




