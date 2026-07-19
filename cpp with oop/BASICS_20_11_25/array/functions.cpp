// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

void printName(string name){
    cout << "Hello "<< name;
}

int sum(int num1, int num2){
    int num3 = num1 + num2;
    return num3;
}

int main(){
    int num1, num2;
    cin >> num1 >> num2;
    // cout<< num1+num2;
    int minimum = min(num1, num2); 
    cout << minimum;
    return 0;
}
// string name;
// cin >> name;
// printName(name);