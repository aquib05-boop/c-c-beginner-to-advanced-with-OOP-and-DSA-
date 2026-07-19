#include <iostream>
using namespace std;

class test{
    int a,b;
    public:
        // test(int i,int j):b(j),a(i+b){
        test(int i,int j):b(j+a),a(i){
            cout<<"Constructor executed"<<endl;
            cout<<"The value of a is: "<<a<<endl;
            cout<<"The value of b is: "<<b<<endl;
        }
};

int main(){
    test(24,15);  
    return 0;
}