#include<iostream>
using namespace std;

class student{//multilevel inheritence derived from a to b,bto c
    int roll_no;
    public:
    int setroll_no(int i){
      roll_no=i;
    }
    int getroll_no(){
        cout<<"your roll no is "<<roll_no<<endl;
    }
};
class subjects:public student{
    protected:
    float maths;
    float science;
    public:
    int set_marks(int x,int y){
        maths=x;
        science=y;
    }
    int get_marks(){
        cout<<"marks obtained in maths "<<maths<<endl
        <<"marks obtained in science "<<science<<endl;
    }
};
class percentage:public subjects{
    float percentage;
    public:
    int set_percentage()
    {
        
        getroll_no();
        get_marks();
      cout<<"your percentage is "<<(maths+science)/2<<endl;
      
    }
};

int main()
{
    percentage vr;
    vr.setroll_no(5);
    vr.set_marks(90,95.78);
    vr.set_percentage();
    return 0;
}