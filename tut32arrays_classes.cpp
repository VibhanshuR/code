#include<iostream>
using namespace std;

class employee
{
    int id;
    int salary;

    public:
    void setdata(void)
    {
        salary=124;
        cout<<"what is the id of employee "<<endl;
        cin>>id;
    }
    void getdata(void){
        cout<<"the id of employee is "<<id<<endl;
    }
};

int main()
{
    employee workers[4];             
    for (int i = 0; i < 4; i++)//we can also do this-//workers[0].setdata();
    {                                               //workers[0].getdata();//till 4
        workers[i].setdata();
        workers[i].getdata();
    }
    
  return 0;
}



