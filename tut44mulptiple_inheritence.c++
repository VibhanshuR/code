#include<iostream>
using namespace std;

//multiple inheritence are those in which derived class has more than 1 base classes
class base1
{
    protected:
    int x;
    public:
    int show(int a)
    {
        x=a;
    }

};
class base2  
{
    protected :
  int y;
  public:
  int print(int b)
  {
    y=b;
  }
};
class derived: public base1 , public base2
{
    public:
    void getme()
    {
        cout<<"the value of base1 "<<x<<endl;
        cout<<"the value of base2 "<<y<<endl;
        cout<<"the sum is "<<x+y<<endl;

    }
};

int main()
{
    derived vr;
    vr.show(5);
    vr.print(8);
    vr.getme();
 return 0;
}