#include <iostream>
using namespace std;

class complex{
    int real, imaginary;
    public:
        void getdata(){
            cout<<"The real part is: "<<real<<endl;
            cout<<"The imaginary part is: "<<imaginary<<endl;
        }
        void setdata(){
            real=29;imaginary=232;
        }
        void setdata(int a, int b){
            real =a;imaginary=b;
        }
};

int main(){
    complex c1;
    complex *ptr = &c1;
    
    // above 2 same as,, 
    // complex *ptr= new complex;
    
    // ptr->setdata(24,25); //ptr jis obj ko point krra uska setdata()
    (*ptr).setdata(24,25);
    (*ptr).getdata();

    //array of objects
    complex *ptr1= new complex[4];
    cout<<"Array of objects using pointer: "<<endl;
    cout<<"ptr: ";
    ptr1->setdata(25,112);
    (ptr1+1)->setdata();
    ptr1->getdata();
    cout<<"(ptr+1): ";
    (ptr1+1)->getdata();
    return 0;
}