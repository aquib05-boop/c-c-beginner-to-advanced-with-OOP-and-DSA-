#include <iostream>
using namespace std;

class complex{
    int a,b;
    public:    
        complex(int x, int y){
            a=x;
            b=y;
        }
        complex(int x){
            a=x;
            b=0;
        }
        void printNumber(){
            cout<<a<<"+"<<b<<"i"<<endl;
        }
};

int main(){
    complex c1(3), c2(4,5);
    c1.printNumber();
    c2.printNumber();
    return 0;
}