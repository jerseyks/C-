#include<class.h>


int main(void)
{
    Compare<int>cmp1(3,7);
    cout<<cmp1.max()<<" is the maximum of two interger numbers."<<endl;
    cout<<cmp1.min()<<" is the maximum of two interger numbers."<<endl;

    Compare<float>cmp2(45.78,93.6);
    cout<<cmp2.max()<<" is the maximum of two interger numbers."<<endl;
    cout<<cmp2.min()<<" is the maximum of two interger numbers."<<endl;

    Compare<char>cmp3('a','A');
    cout<<cmp3.max()<<" is the maximum of two interger numbers."<<endl;
    cout<<cmp3.min()<<" is the maximum of two interger numbers."<<endl;

    return 0;
}



