#include<iostream>
using namespace std;

int main()
// {
//     int i;
//     for(i=0 ; i<=41 ; i++)
//     {
//       cout<<i<<endl;
//       if(i==4){
//         break;//it stops at 4
//       }
//     }
// return 0;
// }
{
    int i;
    for(i=0 ; i<=41 ; i++)
    {
      
      if(i==4){
        continue;//it prints numbers except 4
      }cout<<i<<endl;
    }
return 0;
}