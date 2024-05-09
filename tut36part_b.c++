#include<iostream>
using namespace std;

class point
{
    int a,b;
    public:
    point(int x,int y)
    {
        a=x;
        b=y;
    }
    void print()
    {
        cout<<"the point is ("<<a<<","<<b<<")"<<endl;
    }
};

int main()
{
    point c1(4,6);
    c1.print();

    point c2(8,9);
    c2.print();
return 0;
}