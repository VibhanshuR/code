#include<iostream>
using namespace std;

int main()
{

    int a=5;
    int *ptr=&a;
    *ptr=99;//allocate new value of a as 99
    cout<<"the value of a is "<<*ptr<<endl;

    float *p= new float(7.67);
    cout<<"the address of p is "<<*p<<endl;

    int *arr=new int[3];
    arr[0]=10;
    *(arr+1)=20;//also work as arr[1]
    arr[2]=50;
    arr[3]=70; 
     delete[] arr;//delete the allocation memory of arrays
    cout<<"the value of arr[0] is "<<arr[0]<<endl;
    cout<<"the value of arr[1] is "<<arr[1]<<endl;
    
   cout<<"the value of arr[2] is "<<arr[2]<<endl;
    cout<<"the value of arr[3] is "<<arr[3]<<endl;
return 0;
}