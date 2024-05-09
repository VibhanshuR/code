#include<iostream>
using namespace std;

// *************************private/public classes**************************

class employee
{
    private:int a,b;
    public: int c,d,e;

   void setData(int a1,int b1);
   // {
   //    a=a1;
   //    b=b1;
   // }
   void getData()
   {
    cout<<"the value of a "<<a<<endl;
    cout<<"the value of b "<<b<<endl;
    cout<<"the value of c "<<c<<endl;
    cout<<"the value of d "<<d<<endl;
    cout<<"the value of e "<<e<<endl;
    
   }

};
void employee::setData(int a1,int b1){
   a=a1;
   b=b1;
}

int main()
{
    employee vr;
    vr.c=56;
    vr.d=78;
    vr.e=90;
    vr.setData(89,98);
    vr.getData();

  return 0;
}