#include<iostream>
using namespace std;

int main()
{
    int a=5;
    float b=6.2;

    cout<<"the value of a is "<<(float)a<<endl;//typecasting used to convert 1 parameters to another
    cout<<"the value of b is "<<(int)b<<endl;
    //it can also written as below
    cout<<"the value of a is "<<float(a)<<endl;
    cout<<"the value of b is "<<int(b)<<endl;

    cout<<"the sum is "<<a+b<<endl;
    cout<<"the sum is "<<a+int(b)<<endl;
    cout<<"the sum is "<<a+(int)b<<endl;
     return 0;
}
