#include<iostream>
using namespace std;

int main()
// {
//     int i=1;
//     while( i <101)//does not include ';' in brakets
//                   //there should be only 1 condition in brackets
//     {
//        cout<<i<<endl;
//        i++;
//     }
//     return 0;
    
// }
{
    int i=1;
   do{
       cout<<i<<endl;
       i++;
    } /*while( i <101)*/while(false);//do while terminates at least 1 times without cheking condition
    return 0;  
    
}