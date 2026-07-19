#include <iostream>
using namespace std;

class complex{
    int a,b;
    public:
        void setNumber(int n1, int n2){
            a=n1;b=n2;
        }
        //it means the non member funcn is allowed to do anything with my private members
        friend complex sumComplex(complex o1, complex o2);
        void printNumber(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

complex sumComplex(complex o1, complex o2){
    complex o3;
    o3.setNumber((o1.a+o2.a) , (o1.b+o2.b));
    return o3;
}

int main(){
    complex c1,c2;
    c1.setNumber(1,4);
    c2.setNumber(5,8);
    c1.printNumber();
    c2.printNumber();

    complex c3 = sumComplex(c1,c2);
    return 0;
}