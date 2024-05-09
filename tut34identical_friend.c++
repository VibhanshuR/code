#include<iostream>
using namespace std;

class Y;//forward declaration
class X
{
    int data;
    public:
    void getdata(int value)
    {
        data=value;
    }
    friend void adddata(X,Y);//forward declaration makes assures Y is there next somewhere
};
class Y
{
    int num;
    public:
    void getdata(int value)
    {
        num=value;
    }
    friend void adddata(X,Y);
};
void adddata(X o1,Y o2)
{
    cout<<"the sum is "<<o1.data+o2.num<<endl;
};

int main()
{
    X a1;
    a1.getdata(6);
    Y a2;
    a2.getdata(10);

    adddata(a1,a2);
 return 0;
}