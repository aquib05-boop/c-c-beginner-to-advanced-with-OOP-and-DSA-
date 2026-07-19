#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ofstream out("source.txt");
    ifstream inn("source.txt");
    ofstream outt("destination.txt");
    ifstream in("destination.txt");

    out<<"Trying to copy to other!\nALso this one\nand this as well";
    out.close();
    char ch;
    while(inn.eof()==0){
        inn.putback(ch);
    }

    while(inn.eof()==0)
    outt<<ch;
    
    // getline(in, );
    return 0;
}