#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    string s2;
    ofstream out("user.txt");
    getline(cin,s2);
    out<<s2;
    out.close();

    string extract;
    ifstream in("user.txt");
    // while(in.eof()==0){
    // in>>extract;
    getline(in,extract);
    cout<<extract;
    in.close();
    return 0;
}