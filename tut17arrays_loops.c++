#include<iostream>
using namespace std;

int main()
//*************by for loop**********
// {
//     int marks[]={23,4,56,78,67};
//     for(int i=0;i<5;i++){
//         cout<<"the marks of "<<i<<" is "<<marks[i]<<endl;
//     }
//     return 0;
// }

//***************by while loop*************
// {
//     int marks[]={23,4,56,78,67};
//     int i=0;
//     while(i<5){
//         cout<<"the marks of "<<i<<" is "<<marks[i]<<endl;
//         i++;
//     }
//     return 0;
// }

//***************by do while loop***********
{
    int marks[]={23,4,56,78,67};
    int i=0;
    do{
        cout<<"the marks of "<<i<<" is "<<marks[i]<<endl;
        i++;
    }while(i<5);
    return 0;
}