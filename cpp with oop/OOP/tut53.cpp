#include <iostream>
using namespace std;

class A{
    int a;
    public:
        void setdata(int a){
        // A& setdata(int a){
            // a=a; priority is given to local variable, a is class variable
            this->a = a;
            // return *this;
        }
        void getdata(){
            cout<<"The value of a is: "<<a<<endl;
        }
};

int main(){
    A a;
    a.setdata(5);
    a.getdata();  
    return 0;
}