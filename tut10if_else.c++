#include<iostream>
using namespace std;

 int main()
 {
  int a;
  cout<<"whats your age:"<<endl;
  cin>>a;

  if((a<18) && (a>0))//logical operator:checks both condition
  {
    cout<<"you are not invited to party";
  }
  else if(a==18){
    cout<<"you are still not invited.wait for next 1 year";
  }
  else{
    cout<<"now you are invited";
  }
  return 0;


 }