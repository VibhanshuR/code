#include<iostream>
using namespace std;

class employee
{
   int id;
   int phoneno;

   public:
   void getdata()
   {
    cout<<"what is your id"<<endl;
    cin>>id;
    cout<<"what is your phoneno"<<endl;
    cin>>phoneno;
   }
   void displaydata()
   {
       cout<<"the employee id is "<<id<<endl;
       cout<<"the employee phoneno is "<<phoneno<<endl;
   }
};

int main()
{
    employee vr,rr;
    vr.getdata();
    rr.getdata();
    vr.displaydata();
    rr.displaydata();
return 0;
}