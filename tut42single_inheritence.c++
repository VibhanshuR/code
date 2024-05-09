#include<iostream>
using namespace std;

class base
{
   int data1;
    public:
    int data2;
    void setdata(){
      data1=10;
      data2=20;
    }
    int getdata1(){
        return data1;
    }
    int getdata2(){
        return data2;
    }

};
class derived:public base
{
   int data3;
   public:
   int makedata(){
    data3=data2*10;
   }
  int printdata(){
    cout<<"the data 1 is "<<getdata1()<<endl;//we have fetch value of data 1 from member function
    cout<<"the data 2 is "<<data2<<endl;     //because data1 is private data
    cout<<"the data 3 is "<<data3<<endl;

  }

};

int main()
{
    derived d1;
    d1.setdata();
    d1.makedata();
    d1.printdata();
return 0;
}