#include<iostream>
using namespace std;

//*************swapping by pointer variables********************

void swap(int *a,int *b)
{
  int temp=*a;
  *a=*b;
  *b=temp;

}

int main()
{
    int x,y;
    cout<<"enter no x"<<endl;
    cin>>x;
    cout<<"enter no y"<<endl;
    cin>>y;

    cout<<"the value of x is "<<x<<" and y is "<<y<<endl;
    swap(&x,&y);
    cout<<"the value of x is "<<x<<" and y is "<<y<<endl;


 return 0;
}