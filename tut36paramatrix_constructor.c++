#include<iostream>
using namespace std;

class complex
{
    int a,b;
    public:
    complex(int x,int y);
    void print()
    {
        cout<<"the sum is "<<a<<" + i"<<b<<endl;
    }
};
complex::complex(int x,int y){//here we have give 2 values thats why it is paramatrix
    a=x;
    b=y;
}

int main()
{
    complex c1(4,6);
    c1.print();
return 0;
}