#include <iostream>
using namespace std;

class base1{
    int data;
    public:
        base1(int i){
            data=i;
            cout<<"Base1 class constructor called"<<endl;
        }
        void printdatabase1(){
            cout<<"The value of data1 is: "<<data<<endl;
        }
};

class base2{
    int data2;
    public:
        base2(int i){
            data2=i;
            cout<<"Base1 class constructor called"<<endl;
        }
        void printdatabase2(){
            cout<<"The value of data2 is: "<<data2<<endl;
        }
};

class derived: public base1, public base2{
    int der1, der2;
    public:
        derived(int a, int b, int c, int d): base1(a),base2(b){
            der1=c;
            der2=d;
        }
        void printdataderived(){
            cout<<"The value of der1 is: "<<der1<<endl;
            cout<<"The value of der2 is: "<<der2<<endl;
        }
};

int main(){
    derived harry(24,25,26,27);
    harry.printdatabase1();
    harry.printdatabase2();
    harry.printdataderived();

    return 0;
}