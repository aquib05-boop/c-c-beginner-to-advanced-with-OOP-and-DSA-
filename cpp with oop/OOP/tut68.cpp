#include <iostream>
using namespace std;

template<class t>
class harry{
    public:
        t data;
        harry(){
            // data;
        }
        harry(t a){
            data = a;
        }
        void display();
};

template <class t>
void harry<t>::display(){
    cout<<data;
}

void func(int a){
    cout<<"First func---->Value: "<<a<<endl;
}

template<class t>
void func(t a){
    cout<<"Templatised func---->Value: "<<a<<endl;
}

int main(){
    // harry<char> h;
    // h.data = 'a';
    // h.display();
    func(2);
    func('a');
    return 0;
}