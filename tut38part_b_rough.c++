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
    void display()
    {
     cout<<"this is a number "<<data<<endl;
    }
    
};

int main()
{
  num n1(6),n2;
  n1.display();
  n2.display();
  return 0;
}