#include<iostream>
using namespace std;

template<class T>
void swapp(T &a,T &b)//we have to use swapp only due to standard recognition on function
{
   T temp=a;
   a=b;
   b=temp;
}

template<class T1,class T2>
int average(T1 a,T2 b)//no class only FUNCTION(function template)
{
    float avg;
    avg=(a+b)/2.0;
    return avg;
}

int main()
{
  float n;
  n=average(5,5.6);
  cout<<n<<endl;
  
  cout<<endl;

  int x=8,y=9;
  swapp(x,y);
  cout<<x<<endl;
  cout<<y<<endl;
  return 0;
}