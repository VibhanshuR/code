#include<iostream>
using namespace std;

class num
{
    int data;
    public:
    num(int a)
    {
        data=a;
    }
     num()
    {
        data=0;
    }
    num(num &b)//copy constructor 
    {
        cout<<"copy constructor called ";
        data= b.data;
    }
    void display()
    {
     cout<<"this is a number "<<data<<endl;
    }
    
};

int main()
{
  num x(6),y(9);
  x.display();
  y.display();
  num x1(x);//copy value from constructor
  x1.display();
  return 0;
}