#include <bits/stdc++.h>
using namespace std;

int main(){
    // int n;
    // cout<<"Enter the size: ";
    // cin>>n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>arr[i];
    // }
    
    // // precompute
    // int hash[13] = {0};
    // for(int i = 0;i<n; i++){
    //     hash[arr[i]]+=1;
    // }
    
    // cout<<"Enter the query size: ";
    // int q;
    // cin>>q;
    // while(q--){
    //     int number;
    //     cin>>number;
    //     //  fetch
    //     cout<< hash[number]<<endl;
    // }

    // string s;
    // cin>>s;
    
    // // precompute
    // int hash[26]={0};
    // for (int i = 0; i < 26; i++)
    // {
    //     hash[s[i]-'a']++;
    // }
    
    // int q;
    // cin>>q;
    // while(q--){
    //     char c;
    //     cin>>c;
    //     // fetch
    //     cout<<hash[c-'a']<<endl;
    // }
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    // pre compute
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    
    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        //  fetch
        cout<< mpp[number]<<endl;
    }
    return 0;
}