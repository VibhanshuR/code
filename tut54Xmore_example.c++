#include<iostream>
using namespace std;
//*************************RUN TIME polymorphism*********************************************************
class baseclass{
    public:
    int var_base=3;
    virtual void display()=0;//pure virtual function
};
class derivedclass:public baseclass{
    public: 
    int var_derived=2;
      void display()
    {
        cout<<"the value of var_base is "<<var_base<<endl;
        cout<<"the value of var_derived is "<<var_derived<<endl;
    }
};

int main()
{
    baseclass *base_class_pointer;
    derivedclass obj_derived;
    base_class_pointer=&obj_derived;
    base_class_pointer->display();
return 0;
}