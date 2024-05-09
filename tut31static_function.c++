#include<iostream>
using namespace std;
//**********count is static data member of class employee***************
class employee
{
  int id;
  string name;
  static int count;
  public:
  void setdata(void)
  {
    cout<<"what is your id? "<<endl;
    cin>>id;
    cout<<"what is your name? "<<endl;
    cin>>name;
    count++;
  }
    void getdata(void){
    cout<<"\nid is"<<id<<"\nname:"<<name<<"\nthis is employee no "<<count<<endl;
   }
   static void getcount(void){
    cout<<"the value of count is "<<count<<endl;//can ONLY access count because COUNT in only static
   }//static FUNCTION can only access static VARIBLE
};
int employee:: count;

int main()
{
    employee vr, rr;
    employee::getcount();
    vr.setdata();
    vr.getdata();
    employee::getcount();
    rr.setdata();
    rr.getdata();
    return 0;
}