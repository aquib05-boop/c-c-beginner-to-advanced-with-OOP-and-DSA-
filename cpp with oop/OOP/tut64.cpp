#include <iostream>
using namespace std;

template <class T>

class vector{
    public:
    T* arr;
    int size;
        vector(int m){
            size = m;
            arr = new T[size];
        }
    T dotProduct(vector &v){
        T d=0;
        for (int i = 0; i < size; i++)
        {
            d+=this->arr[i]*v.arr[i];
        }
        return d;
    }
};

int main(){
    vector<double> v1(3);
    v1.arr[0] = 4.3;
    v1.arr[1] = 3.2;
    v1.arr[2] = 1.1;
    vector<double> v2(3);
    v2.arr[0] = 1.2;
    v2.arr[1] = 0.2;
    v2.arr[2] = 1.3;
    cout<<v1.dotProduct(v2);
    return 0;
}