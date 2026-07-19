#include <iostream>
using namespace std;

int main(){
    int a=4;
    int* ptr=&a;

    cout<<"The value at a is: "<<*(ptr)<<endl;

    float* p=new float(40.84);
    // delete p;
    cout<<"The value at a after new operator is: "<<*(p)<<endl;
    int *arr = new int[3]; //dynamicaaly allocated array
    arr[0]=21;
    arr[1]=23; //*(arr+1)=23
    arr[2]=25;

    delete[] arr;
    cout<<"The value at arr[0]is: "<<arr[0]<<endl;
    cout<<"The value at arr[1]is: "<<arr[1]<<endl;
    cout<<"The value at arr[2]is: "<<arr[2]<<endl;
    return 0;
}