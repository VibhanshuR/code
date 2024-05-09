#include<iostream>
using namespace std;

class shop
{
    private:int itemId[100];
            int itemPrice[100];
            int counter;

    public:void initCounter(void) {counter=0;}
           void setPrice(void);
           void displayPrice() ;                
};
void shop::setPrice(void)
{
    cout << "enter ID of your item no " << counter+1 << endl;
    cin >> itemId[counter];
    cout << "enter price of your item " <<endl;
    cin >> itemPrice[counter];
    counter++;
}
void shop::displayPrice(void){
    for (int i = 0; i < counter; i++)
    {
        cout<<"the price of your itemId "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
    
}

int main()
{
    shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();
return 0;
}