#include<iostream>
#include<math.h>
using namespace std;

class simplecalculator{
    protected:
    int x,y;
    public:
    int setvoid(int a,int b){
        x=a;
        y=b; 
    }
  
   
};
class scientificcalculator{
    protected:
    int o,p;
    public:
    int setup(int c,int d){
        o=c;
        p=d;
    }
    
   
};

class hybridcalculator:public simplecalculator,public scientificcalculator
{
     public:
     void print()
     {
        cout<<"the square of O is "<<o*o<<endl;
        cout<<"the square of P is "<<p*p<<endl;
        cout<<"the square of O and P is "<<sqrt(o)<<" & "<<sqrt(p)<<endl;
        cout<<"the log of O and P is "<<log(o)<<"and"<<log(p)<<endl;
   
        cout<<"the sum is "<<x+y<<endl;
        cout<<"the subtraction is is "<<x-y<<endl;
        cout<<"the sum is "<<x*y<<endl;
     }
    
 
};

int main()
{
 hybridcalculator h;
 h.setup(6,8);
 h.setvoid(8,9);
 h.print();
  return 0;
}