#include <iostream>
using namespace std;

class complex{
    int a,b;
    public:
    complex(void);
    complex(int , int );
    void printNumber(void){
        cout<<a<<"+"<<b<<"i"<<endl;
    }
};
complex::complex(void){
    a=10;
    b=0;
}
complex::complex(int x, int y){
    a=x;
    b=y;
}

int main(){
    complex c1,c2(3,4);
    c1.printNumber();
    c2.printNumber();
    return 0;
}