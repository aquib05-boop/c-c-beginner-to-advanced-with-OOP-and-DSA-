#include <iostream>
using namespace std;

void exchange(int &x, int &y){
    int temp = x;
    x=y;
    y=temp;
}

int main(){
    int a = 8;
    int b = 9;
    cout<<"The value at a is: "<<a<<endl;
    cout<<"The value at b is: "<<b<<endl;
    cout<<"The value of address of b is: "<<&b<<endl;
    cout<<"The value of address of a is: "<<&a<<endl;
    

    // exchange(a,b);
    // cout<<"After swapping:\n";

    // cout<<"The value at a is: "<<a<<endl;
    // cout<<"The value at b is: "<<b<<endl;
    return 0;
}