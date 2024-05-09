#include<iostream>
using namespace std;

int count=0;
class num
{
    public:
    num()
    {
      count++;
      cout<<"time when constructor is called "<<count<<endl;
    }
   ~num()
   {
    cout<<"time when destructor is called "<<count<<endl;
    count--;
   }
};

int main()
{
    cout<<"entering the main function"<<endl;
    cout<<"entering the block"<<endl;
    num n1;
    {
        cout<<"entering this block"<<endl;
        cout<<"creting two more block"<<endl;
        num n2,n3;
        cout<<"time when exit block"<<endl;
    }
    cout<<"back to main"<<endl;

  return 0;
}