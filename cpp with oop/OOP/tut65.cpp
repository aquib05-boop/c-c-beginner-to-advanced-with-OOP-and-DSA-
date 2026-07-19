#include <iostream>
using namespace std;

template<class T1, class T2>
class myclass{
    public:
        T1 data1;
        T2 data2;
        myclass(T1 a, T2 b){
            data1=a;
            data2=b;
        }
        void display(){
            cout<<this->data1<<endl<<this->data2;
        }
};

int main(){
    myclass<float,int> c1(6.67, 5);
    c1.display();
    return 0;
}