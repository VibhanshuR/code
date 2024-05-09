#include<iostream>
using namespace std;

int sum(int a,int b)
{
    int c;
    c=a+b;
    return c;
}

int main()
{
 int x,y;
 cout<<"write no x"<<endl;
 cin>>x;
 cout<<"write no y"<<endl;
 cin>>y;
    
    cout<<"the sum is "<<sum(x,y);
 return 0;
}
