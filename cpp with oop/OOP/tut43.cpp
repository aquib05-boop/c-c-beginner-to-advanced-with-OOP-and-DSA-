#include <iostream>
using namespace std;

class base1{
    public:
        void greet(){
            cout<<"How are you"<<endl;
        }
    };
    
class base2{
    public:
        void greet(){
            cout<<"Kaise ho"<<endl;
        }
};

class derived:public base1,public base2{
    int a;
    public:
        void greet(){
            base2::greet();
        }
};

class b{
    public:
    void say(){
        cout<<"Hello"<<endl;
    }
};

class c: public b{
    public:
    void say(){
        cout<<"Got replaced by derived(single inheritance bro)!";
    }
};

int main(){
    // derived d1;
    // d1.greet();
    c a;
    a.say();
    return 0;
}