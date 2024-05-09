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
    void getdata(void)
  {
    cout<<"\nid is"<<id<<"\nname:"<<name<<"\nthis is employee no "<<count<<endl;
  }
};
int employee:: count;

int main()
{
    employee vr,rr;
   vr.setdata();
    vr.getdata();
   rr.setdata();
  rr.getdata();
  return 0;
}