#include<iostream>
using namespace std;

class employee
{
    public:
    int id;
    float salary;
    employee(int ide)
    {
        id=ide;
        salary=34.4;
    }
    employee (){};
};
class programmer:public employee//inheritece class
{
    public:
  programmer(int ide)
    {
        id=ide;
        salary=34.4;
    }
    int languagecode=9;
    void getdata()
    {
      cout<<id<<endl;
    }
   
};

int main()
{
    employee vr(1),rr(6);
    cout<<vr.salary<<endl;
    cout<<vr.id<<endl;
    cout<<rr.salary<<endl;

    programmer skill(10);
    cout<<skill.languagecode<<endl;
    cout<<skill.id<<endl;
return 0;
}