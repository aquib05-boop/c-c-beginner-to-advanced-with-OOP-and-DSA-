#include <iostream>
using namespace std;

class base1{
    protected:
        int base1int;
    public:
        void set_base1int(int a){
            base1int = a;
        }
};

class base2{
    protected:
        int base2int;
    public:
        void set_base2int(int b){
            base2int = b;
        }
};

class derived: public base1, public base2{
    public:
        void show(){
            cout<<"The value of bse1 is: "<<base1int<<endl;
            cout<<"The value of bse2 is: "<<base2int<<endl;
            cout<<"The sum value is: "<<base1int+base2int<<endl;
        }
};

int main(){
    derived d1;
    d1.set_base1int(24);
    d1.set_base2int(36);
    d1.show();
    return 0;
}