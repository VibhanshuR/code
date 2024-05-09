#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main()
{
    int arr[]={45,78,90,4,9,7};
    sort(arr, arr+5);//only do sorting of only 5 numbers because of 'arr+5'
    for (int i = 0; i < 6; i++)
    {
       cout<<" "<<arr[i];
    }
    
return 0;
}