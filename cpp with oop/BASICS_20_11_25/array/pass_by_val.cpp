#include<bits/stdc++.h>
using namespace std;

// void doSomething(string& s){
//     s[0] = 'T';
//     cout<< s<< endl;
// }


// int &x = y;   directly stores the address of y
// int y = 10;

void doSomething(int arr[], int size){
    arr[0]+=100;
    cout<< arr[0] << endl;
}

int main(){
    int n = 5;
    int arr[n];

    for(int i = 0; i<n ; i++){
        cin>> arr[i];
    }

    doSomething(arr, n);

    cout << "Value inside int main at index 0: " << arr[0] << endl;
    // string s = "AQUIB";
    // doSomething(s);
    // cout<< s << endl;
    return 0;
}