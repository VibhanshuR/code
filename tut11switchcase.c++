#include<iostream>
using namespace std;

int main()
{
 int age;
 cout<<"whats your age"<<endl;
 cin>>age;

 switch (age)
 {
    case 18:cout<<"come at party next year"<<endl;
    break;
    case 21:cout<<"you can come to the party"<<endl;
    break;
    case 15:cout<<"you are not invited"<<endl;
    break;
    default:cout<<"there is no person invited";
    break;
 }
 return 0;
}