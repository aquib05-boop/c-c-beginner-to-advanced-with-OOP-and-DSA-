#include<bits/stdc++.h>
using namespace std;

void f(int i, int n){
    if(i>n) return;
    cout<<i<<" ";
    f(i+1, n);
    //  n funcn-> TC= O(n), SC-> O(n)
}

void q(int n){
    static int i =0;
    if(i>n) return;
    cout<<i<<" ";
    i++;
    q(n);
}

// backtracking
void u(int i, int n){
    if(i<1) return;
    u(i-1, n);
    cout<<i<<" ";//kept it after the funcn call, only gets executed if the base case is true
}

void j(int i, int n){
    if(i>n) return;
    j(i+1, n);
    cout<<i<<" ";
}

int main(){
    // f(1, 5);
    // u(6,6);
    j(1, 6);
    return 0;
}