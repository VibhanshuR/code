#include<iostream>
using namespace std;

//*********************************fibonacchi series************************************
int fabo(int n)
{
  if(n<=2){
    return 1;//it means if u give 0 or 1 then return '1'
  }
   return n=fabo(n-2)+fabo(n-1);//and if value is greater than 1,then process this formula
}

int main()
{
    int a;
    cout<<"tell number you want to do its factorial"<<endl;
    cin>>a;
    cout<<"the answer is "<<fabo(a)<<endl;
    return 0;
}