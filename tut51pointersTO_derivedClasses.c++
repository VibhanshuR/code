#include<iostream>
using namespace std;
//*********************polymorphism***********************************************************************
class baseclass{
    public:
    int var_base=1;
    int display(){//both baseclass and derivedclass has display() function
                  //but it displays the content of baseclass because it has default precedence
        cout<<"the value of var_base is "<<var_base<<endl;
    }
};
class derivedclass:public baseclass{
    public:
    int var_derived=2;
    void display(){
        cout<<"the value of var_base is "<<var_base<<endl;
        cout<<"the value of var_derived is "<<var_derived<<endl;
    }
};

int main()
{
    baseclass *base_class_pointer;
    baseclass obj_base;
    derivedclass obj_derived;
    base_class_pointer=&obj_derived;
    base_class_pointer->display();//it displays display()function of baseclass because of its precedence

    derivedclass *derived_class_pointer;
    derived_class_pointer=&obj_derived;
    derived_class_pointer->var_derived=89;
    derived_class_pointer->display();
return 0;
}