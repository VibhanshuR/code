#include<iostream>
using namespace std;

class employee
{
    public:
    int id;
    float salary;
    employee(int x,int y)
    {
        id=x;
        salary=y;
    }
    void print()
    {
        cout<<"its id is "<<id<<" and salary is "<<salary<<endl; 
    }
    employee (){};
};
class programmer:public employee
{
    public:
      int house;
        programmer(int x,int y,int z)
    {
        id=x;
        salary=y;
        house=z;
    }
    void print()
    {
        cout<<"its id is "<<id<<" and salary is "<<salary<<" and house number is "<<house<<endl; 
    }
   
};

int main()
{
    employee vr(1,7);
    vr.print();
    employee rr;
    vr.print();

    programmer skill(10,5,6);
    skill.print();
return 0;
}