#include<iostream>
using namespace std;

class complex
{
    int a,b;
    public:
    complex(void);
    void print()
    {
        cout<<"the sum is "<<a<<" + i"<<b<<endl;
    }
};
complex::complex(void){//constructor(do not have return values and return types)
//constructor has its name as class function so it gets automatically invokes
    a=3;
    b=5;
}

int main()
{
    complex c1;
    c1.print();
return 0;
}