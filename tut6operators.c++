#include<iostream>
using namespace std;

int main()
{
    int a=6,b=5;
    cout<<"following are the operators in c++"<<endl;//endl helps to jumps to next line
    //arithematic operators
    cout<<"the sum of a and b is "<<a+b<<endl;
    cout<<"the subtraction of a and b "<<a-b<<endl;
    cout<<"the value of a/b "<<a/b<<endl;
    cout<<"the value of a%b "<<a%b<<endl;
    cout<<"the value of a*b "<<a*b<<endl;//the value of a is 6 here 
    cout<<"the value of a++ "<<a++<<endl;//it prints value of a=6 and then +1 to it ie=7
    cout<<"the value of a-- "<<a--<<endl;//it prints value of a=7 and then -1 to it ie=6
    cout<<"the value of ++a "<<++a<<endl;//it first add value of +1 to previous a=6+1=7
    cout<<"the value of --a "<<--a<<endl;//it first subtract value of -1 to previous a=7-1=6
    cout<<endl;
    //alt + shift makes changes by puttinf all cursors

    //assingment operators: used to assing values to operators
    //int a=6,b=5;
    //char d='d';

    //comparison operator
     cout<<"the value of a==b is "<<(a==b)<<endl;
     cout<<"the value of a!=b is "<<(a!=b)<<endl;
     cout<<"the value of a<=b is "<<(a<=b)<<endl;
     cout<<"the value of a>=b is "<<(a>=b)<<endl;
     cout<<"the value of a>b is "<<(a>b)<<endl;
     cout<<"the value of a<b is "<<(a<b)<<endl;
     cout<<endl;

 //logical operator
     cout<<"the value of ((a==b) && (a>b)) is "<<((a==b) && (a>b))<<endl;
     //&& is 'and',it checks both the values is true
     cout<<"the value of ((a==b) || (a>b)) is "<<((a==b) || (a>b))<<endl;
     //|| is 'or',it checks only 1 condition is true or not
     cout<<"the value of logical not operator (!(a==b)) is "<<(!(a==b))<<endl;
     //the logical not operator checks the output and reverse it




    
    return 0;
}