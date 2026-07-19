#include <iostream>
using namespace std;

class shopitem{
    int id;
    float price;
    public:
        void setdata(int a, float b){
            id=a;price=b;
        }
        void getdata(){
            cout<<"Item ID: "<<id<<endl;
            cout<<"Item Price: "<<price<<endl;
        }
};

int main(){
    int size=2;
    /*general store, veggies, hardware*/
    shopitem *ptr=new shopitem[size];
    shopitem *ptrTemp = ptr;
    int p; float q;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter Id and price of item "<<(i+i)<<": ";
        cin>>p>>q;
        ptrTemp->setdata(p,q);
        ptrTemp++;
    }
    ptrTemp=ptr;
    for (int i = 0; i < size; i++)
    {
        cout<<"Item Number: "<<i+1<<endl;
        ptrTemp->getdata();
        ptrTemp++;
    }
    
    return 0;
}