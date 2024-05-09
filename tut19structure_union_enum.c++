#include<iostream>
using namespace std;

struct employee
{
    int id;
    string favcolor;
    string name;
};
union money{
    //barter system:employee taking exchange of money
    int rice;
    float car;
    int vada;

};

int main()
{
    enum meal{breakfast,lunch,dinner};
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    struct employee e1;
    union money m1;
    m1.rice=4;//in union u can use only 1 thing at a time(rice or car or vada)
    cout<<"no of kilos of rice in 100 rupees: "<<m1.rice<<endl;
    e1.id=11;
    e1.favcolor="blue";
    e1.name="vr";
    cout<<"the employee id is "<<e1.id<<endl;
     cout<<"the employee favourite color is "<<e1.favcolor<<endl;
      cout<<"the employee name is "<<e1.name<<endl;



return 0;
}