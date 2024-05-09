#include<iostream>
using namespace std;

template<class T1,class T2>//multiple parameters --->you can set more
class myclass{
    public:
    T1 data1;//in place of int,char,float
    T2 data2;
   myclass(T1 data1,T2 data2)//set (T1 data1) instead of (int data1)
   {
     this->data1=data1;//this function
      this->data2=data2;
   }
     void display(){
        cout<<data1<<endl<<data2<<endl;
     }
};

int main()
{
    myclass<int,float> vr(6,9.7);//<int,float>->setting value of T1,T2
    vr.display();
return 0;
}