#include<iostream>
using namespace std;

/*student=marks
student=sports
marks=result
sports=result*/

class student{
    protected:
    int roll_no;
    public:
    int set(int a){
        roll_no=a;
    }
    void print(){
    cout<<"the roll no is "<<roll_no<<endl;
    }
};
class marks:virtual public student
{
    protected:
    int maths;
    int science;
    public:
    int sets(int x,int y){
        maths=x;
        science=y;
    } 
    void prints(){
        cout<<"the marks of maths:"<<maths<<endl
        <<"science:"<<science<<endl;
    }
};
class sports:virtual public student{
   protected:
   int sports;
   public:
   int set_marks(int z){
    sports=z;
   }
   void getout(){
    cout<<"the marks of SPORTS is "<<sports<<endl;
   }
};
class result:public marks,public sports{
    private:
   int total;
    public:
    void display()
    {
        total=(maths+science+sports)/3;
        print();
        prints();
        getout();
        cout<<"your TOTAL MARKS is "<<total<<endl;
    }
};


int main()
{
    result vr;
    vr.set(8);
    vr.sets(98,99);
    vr.set_marks(96);
    // vr.print();
    // vr.prints();
    // vr.getout();
    vr.display();
return 0;
}