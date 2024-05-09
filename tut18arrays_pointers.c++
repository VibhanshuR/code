#include<iostream>
using namespace std;

int main()
{
    int marks[]={23,45,65,70,89};
    int *p=marks;
    cout<<"the marks of [0] is "<<*p<<endl;
    cout<<"the marks of [1] is "<<*(p+1)<<endl;
    cout<<"the marks of [2] is "<<*(p+2)<<endl;
    cout<<"the marks of [3] is "<<*(p+3)<<endl;
    cout<<"the marks of [4] is "<<*(p+4)<<endl;
    cout<<*p++<<endl;
    cout<<*++p<<endl;
    return 0;
}