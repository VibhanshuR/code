#include<iostream>
using namespace std;

int main()
{//pointer is a datatype which stores address of other datatypes
    int a=4;
    int *b=&a;
    // & --address of operator
    cout<<"the address of a is "<<&a<<endl;//value of "a"
    cout<<"the address of a is "<<b<<endl;//in memory

    //*--value at dereference operator
    cout<<"the value of a is "<<*b<<endl;//gives value of 4,which we have assing

    //pointer to pointer(store value of other pointer variable)
    int **c=&b;
    cout<<"the value of c is "<<**c<<endl;
return 0;
}