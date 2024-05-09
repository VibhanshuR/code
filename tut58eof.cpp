#include <iostream>
#include <string>
#include <fstream>
 
using namespace std;
 
int main()
{
 
    
    ofstream out;
  out.open("tut58file.txt");
 
    
    out <<"This is me\n";
    out <<"find rudra?";
    out.close();

     
    ifstream in;
    string st;
    //opening the text file into in
    in.open("tut58file.txt");
 
    // giving output the string lines by storing in st until the file reaches the end of it
    while (in.eof()==0) 
    {
        // using getline to fill the whole line in st
        getline(in,st);
        cout<<st<<endl;
    }
    return 0;

}


 

   
    
