#include<iostream>
using namespace std;

class base1{
    int data1;
    public:
    base1(int a)
    {
     data1=a;
    }
    void gets()
    {
        cout<<"the value of data1 is "<<data1<<endl;
    }
};
class base2{
    int data2;
    public:
    base2(int a)
    {
     data2=a;
    }
    void getout(){
        cout<<"the value of data2 is "<<data2<<endl;
    }
};
class derived:public base1,public base2//first base1 is called,then base2 is called
{
    int derived1,derived2;
    public:
    derived(int a,int b,int c,int d):base1(a),base2(b){
       derived1=c;
       derived2=d;
    }
    void print(){
        gets();
        getout();
     cout<<"the value of derived1 is "<<derived1<<endl;
     cout<<"the value of derived2 is "<<derived2<<endl;
    }
};

int main()
{
  derived vr(7,8,9,6);
  vr.print();
  return 0;
}