#include<iostream>
using namespace std;

class marks{
    int real;
    int imaginary;
    public:
    int set(int a,int b){
        real=a;
        imaginary=b;
    }
    void put(){
        cout<<"the value of real is "<<real<<endl;
        cout<<"the value of imaginary is "<<imaginary<<endl;

    }
};

int main()
{
    // marks vr;
    // marks *ptr=&vr;          or we can also write it as below 
    marks *ptr=new marks;       //we can do all 3 lines above in single line operation
    // (*ptr).set(7,9);is exactly same as
    ptr->set(7,9);//arrow operator points setdata
    // (*ptr).put();
    ptr->put();
    return 0;
}