#include<iostream>
using namespace std;

class something{
    int x;
    public:
    int set(int x){
    this->x=x;//this is a keyword which is a pointer which points to the object
              //which invokes the member function
    }

    void get(){
        cout<<"the value of x is "<<x<<endl;
    }
};

int main()
{
    something vr;
    vr.set(9);
    vr.get();
return 0;
}