#include <iostream>
using namespace std;

template <class T1=int, class T2=float>

class aquib{
    public:
        T1 a;
        T2 b;
        aquib(T1 x, T2 y){
            a=x;
            b=y;
        }
        void display(){
            cout<<"Value of a: "<<a<<endl;
            cout<<"Value of b: "<<b<<endl;
        }
};

int main(){
    aquib<> h(4,6.4);
    aquib<char, int> a('b',6.4);
    h.display();
    a.display();
    return 0;
}