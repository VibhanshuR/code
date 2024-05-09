#include<iostream>
using namespace std;

int factorial(int n)
{
  if(n<=1){
    return 1;//it means if u give 0 or 1 then return '1'
  }
   return n=n*factorial(n-1);//and if value is greater than 1,then process this formula
}

int main()
{
    int a;
    cout<<"tell number you want to do its factorial"<<endl;
    cin>>a;
    cout<<"the answer is "<<factorial(a)<<endl;
    return 0;
}