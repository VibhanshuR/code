#include<iostream>
using namespace std;

class complex
{
    int a,b;
    public:
    complex(int x,int y)//constructor overloading:when threr is multiple constructor in same function
{                    //here we have 3 constructor-1 default & 2 paramatrix
    a=x;
    b=y;
}
   complex(int x)//paramatrix
   {
    a=x;
    b=0;
   }
   complex()//default constructor
   {
    a=0;
    b=0;
   }
    void print()
    {
        cout<<"the sum is "<<a<<" + i"<<b<<endl;
    }
};


int main()
{
    complex c1(4,6);
    c1.print();

    complex c2(6);
    c2.print();

    complex c3(7,8);
     c3.print();
return 0;
}