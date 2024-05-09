#include<iostream>
#include<fstream>
#include<string> 
using namespace std;

// int main()
// {
//     string vr="hi this is me";//writing this in "tut55.txt"
//     //opening file using constructor and writing it
//     ofstream out("tut55.txt");//write operation
//     out<<vr;
// return 0;
// }
int main()
{
    ofstream out;
    out.open("tut55.txt");
    out<<"you know who i am";
    out.close();
    return 0;
}