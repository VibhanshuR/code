#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
    map<string,int> mapmarks;
    mapmarks["jack"]=98;
    mapmarks["sparrow"]=9;
    mapmarks["rudra"]=79;
    mapmarks["vibhu"]=54;
    mapmarks["alok"]=18;
    mapmarks.insert({{"vinayak",89},{"ankit",98}});//it inserts the marks
    map<string,int>::iterator iter;
    for (iter=mapmarks.begin(); iter!=mapmarks.end();)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }
    cout<<"the size is: "<<mapmarks.size()<<endl;
    cout<<"the MAXsize is: "<<mapmarks.max_size()<<endl;
    cout<<"the empty return value is: "<<mapmarks.empty()<<endl;

     return 0;
}