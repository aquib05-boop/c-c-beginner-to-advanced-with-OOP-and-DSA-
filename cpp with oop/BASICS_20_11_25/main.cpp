#include <iostream>
using namespace std;

int main(){
    // cout<<"hello world!"<<endl;
    // cout<<"next line";
    int a, b, c;
    short _sa = 9;   //case sensitive, "sa" & "Sa" etc. are diff. variable
    cout<<_sa;  //"_" before var is allowed, but number only after var name, sa1
    // string harry = "Aquib";

    // short const _sa = 9; //this permanently sets the value of sa to 9 and cant be cahnged further
    cout<<"the value of  _sa is "<<_sa;
    _sa = 54;
    cout<<"\nthe value of  _sa is "<<_sa;
    return 0;
}