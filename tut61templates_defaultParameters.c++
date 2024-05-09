#include<iostream>
using namespace std;

template<class T1=float,class T2=int,class T3=float>//default parameters
class vibhu{
    public:
    T1 x;
    T2 y;
    T3 z;
    vibhu(T1 x,T2 y,T3 z){
        this->x=x;
        this->y=y;
        this->z=z;
    }
    void display(){
        cout<<"the value of x is "<<x<<endl;
        cout<<"the value of y is "<<y<<endl;
        cout<<"the value of z is "<<z<<endl;
    }
};

int main()
{
    vibhu<int,float,float> vr(5,6.89,7); 
    vr.display();

    cout<<endl;

    vibhu<> rr(5,6,7);//taking the default parameters if u dont specify in place of 'vibhu<>'
    //taking default parameters from above
    rr.display();
    return 0;
}