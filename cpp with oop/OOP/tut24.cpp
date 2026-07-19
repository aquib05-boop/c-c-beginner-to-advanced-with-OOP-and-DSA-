#include <iostream>
using namespace std;

class employee{
    int id;
    static int count;
    public:
        void setData(void){
            cout<<"Enter the id: ";
            cin>>id;
        }
        void getData(void){
            cout<<"The id of the employee is: "<<id;
        }
};

int employee::count; 

int main(){
    employee harsh, rohan, lovish;
    harsh.setData();
    harsh.getData();
    rohan.setData();
    rohan.getData();
    return 0;
}