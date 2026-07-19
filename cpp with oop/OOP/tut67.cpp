#include <iostream>
using namespace std;

/*float funcAverage(int a, int b){
    float avg = (a+b)/2;
    return avg;
}
float funcAverage(int a, float b){
    float avg = (a+b)/2;
    return avg;
}
float funcAverage(float a, int b){
    float avg = (a+b)/2;
    return avg;
}*/

template<class t1,class t2>
float funcAverage(t1 a, t2 b){
    float avg = (a+b)/2;
    return avg;
}

int main(){
    cout<<funcAverage(21,2.0);
    return 0;
}