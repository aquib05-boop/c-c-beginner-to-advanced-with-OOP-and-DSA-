#include<bits/stdc++.h>
using namespace std;

int main(){
    int marks;
    cin >> marks;
    if(marks<25){
        cout<< "F";
    }
    else if(marks <44){
        cout<< "E";
    }
    else if(marks <49){
        cout<< "D";
    }
    else if(marks <59){
        cout<< "C";
    }
    else if(marks <79){
        cout<< "B";
    }
    else if(marks <=100){
        cout<< "A";
    }
    
    return 0;
}

// write a program which takes age as input
// and prints if you are an adult.

// int age;
// cout << "Enter your age: ";
// cin >> age;
// if(age>=18){
//     cout << "You are an adult."<< endl;
// }
// else if(age<18){
//     cout << "You are not an adult";
// }