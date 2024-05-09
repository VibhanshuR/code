#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string name;
    ofstream vr("tut57file.txt");
    cout<<"enter your name "<<endl;
    cin>>name;
    //writing below line in file
    vr<<"your name is "+name;

    vr.close();//close above file programme

   string rudra;
   ifstream get("tut57file.txt"); 
   get>>rudra;
  //getline(get,rudra);
   cout<<rudra;
   

return 0;
}