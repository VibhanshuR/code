#include<iostream>
using namespace std;

class complex {
    int a,b;

    public:
    void putsum(int x,int y){
    a=x;
    b=y;
    }
    friend complex sumcomplex(complex o1,complex o2);
   void printsum(void){
       cout<<"the complex no is "<<a<<" + i"<<b<<endl;
   }

};
    complex sumcomplex(complex o1,complex o2)
    {
        complex o3;
        o3.putsum((o1.a + o2.a),(o1.b + o2.b));
        return o3;
    }
int main()
{
 complex c1,c2,sum;
 c1.putsum(7,8);
 c1.printsum();

 c2.putsum(5,6);
 c2.printsum();

 sum = sumcomplex(c1,c2);
 sum.printsum();
 return 0;
}