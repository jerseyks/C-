#include<class.h>


int main(void)
{
    Time time1(34,59),time2;                    

    cout<<"time1 :";
    time1.display();                            //34:59
    ++time1;                    //time1-1;      //
    cout<<"++time1 :";
    time1.display();            // time1=A标记  //35:00      
    time2=time1++;              //time2=A标记   //
    cout<<"time1++ :";
    time1.display();            //time2+1;      //35:01
    cout<<"time2 :";
    time2.display();                            //35:00

    return 0;
}



