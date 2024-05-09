#include<iostream>
using namespace std;



template<class T1,class T2>
int average(T1 a,T2 b)//no class only FUNCTION(function template)
{
    float avg;
    avg=(a+b)/2.0;
    cout<<"the avg is "<<avg<<endl;
    return avg;
}

int main()
{
  average(5,5.6); 
  
} 