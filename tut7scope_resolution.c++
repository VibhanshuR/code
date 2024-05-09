#include<iostream>
using namespace std;

int c=6;

int main()
{
 int a,b,c;
 cout<<"enter the value of a:"<<endl;
 cin>>a;
 cout<<"enter the value of b:"<<endl;
 cin>>b;

 c=a+b;
 cout<<"the value of sum is "<<c<<endl;
 cout<<"the global c is "<<::c<<endl; 
 //'::' is "global scope variable" used to print global scope varable if there is local ariable with same name4

return 0;
}