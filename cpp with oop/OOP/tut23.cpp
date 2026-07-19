#include <iostream>
using namespace std;

class shop{
    int itemId[100];
    int itemPrice[100];
    int counter;
    public:
        void initCounter(void){ counter=0;}
        void getPrice(void);
        void setPrice(void);
        void displayPrice(void);
};

void shop :: setPrice(void){
    cout<<"enter ID of your item"<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"enter price of your item"<<endl;
    cin>>itemPrice[counter];
    counter++;
}

void shop::displayPrice(void){
    for (int i = 0; i < counter; i++)
    {
        cout<<"The price of item with ID "<<itemId[i]<<" is: "<<itemPrice[i]<<endl;
    }
}

int main(){
    shop dukan;
    dukan.initCounter();
    dukan.setPrice();
    dukan.displayPrice();
    return 0;
}