#include<iostream>
using namespace std;

class bank
{
    int principal;
    int years;
    float rate;
    int returnvalue;

    public:
    bank();
    bank( int p,int y,float r);
    bank( int p,int y,int r);
    void show();
};    
    bank::bank(){}
    bank::bank( int p,int y,float r)
    {
        principal=p;
        years=y;
        rate=r;
        returnvalue=principal;
        for (int i = 0; i < y; i++)
        {
           returnvalue=returnvalue * (1+rate);
        }
        
    }
      bank:: bank( int p,int y,int r)
    {
        principal=p;
        years=y;
        rate=float(r)/100;//if the rate is taken in percentage
        returnvalue=principal;
        for (int i = 0; i < y; i++)
        {
           returnvalue=returnvalue * (1+rate);
        }
        
    }
    
     



void bank::show()
{
  cout<<"principal amt was"<<principal<<endl<<"return value after "<<years<<endl
  <<"is "<<returnvalue;
};

int main()
{
    bank y1,y2;
    int p,y;
    float r;
    int R;
    cout<<"enter p,y,r"<<endl;
    cin>>p>>y>>r;
    y1=bank(p,y,r);
    y1.show();

    cout<<"\nenter p,y,r"<<endl;
    cin>>p>>y>>R;
    y2=bank(p,y,R);
    y2.show();
    return 0;
}