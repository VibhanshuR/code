#include<iostream>
using namespace std;

int sum(int a,int b)
{
    cout<<"with using two parameters"<<endl;
    return a+b;
}
int sum(float a,float b,float c)//same function 'sum' but 2 different parameters
{
    cout<<"with using 3 parameters"<<endl;
    return a+b+c;
}
//volume of cylinder
float volume(float r,float h)//not comes in function overloading a its parameter is different
{
  return (3.14*(r*r)*h);
}

int main()
{
  cout<<"the sum of 3 and 6 is "<<sum(3,6)<<endl;
  cout<<"the sum of 1,5 and 6 is "<<sum(1,5,8)<<endl;
  cout<<"the volume of cylinder is  "<<volume(3,6)<<endl;
  return 0;
}