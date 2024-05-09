#include<iostream>
#include<list>
 
using namespace std;
 
void display(list<int> &lst)
{
    list<int> :: iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
 
int main(){
    
    list<int> list1;  //empty list of 0 length
 
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
    display(list1);
    
    list<int> list2(3);//empty list of size 7(means you have 3 spaces without values)
    list<int>::iterator iter;
    iter=list2.begin();
    *iter=89;
    iter++;
    *iter=7;
    iter++;
    *iter=9;
    iter++;
    display(list2);

    list1.merge(list2);
    cout<<"the list after merging "<<endl;
    display(list1);
    list1.sort();
    cout<<"the list after merging and sorting "<<endl;
    display(list1);
    list1.reverse();
    cout<<"reversing the list "<<endl;
    display(list1);
 
    return 0;
}
