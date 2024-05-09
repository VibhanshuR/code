#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string st;
    //opening file using constructor and reading it
    ifstream in;//read operation
     in.open("tut56.txt");
    //in>>st;//only read 1st word because it can't count spaces and lines

    getline(in,st);//getline can read spaces and lines(it reads 1st line)
    getline(in,st);//reads 2nd line and ONLY PRINTS 2ND LINE
    cout<<st;

return 0;
}