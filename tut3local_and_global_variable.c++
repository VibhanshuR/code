#include<iostream>
using namespace std;
int glo=6;//global variable

int sum()
{
    cout<<glo;
}

int main()
{
    int glo=78;//local variable
    bool a=true;//bool has only two values true&false and gives 1 on tue and 0 on false
    sum();
 cout<<glo;
 cout<<"\nthe value of bool is "<<a;
    return 0;
}
//always give precedence to local variable first