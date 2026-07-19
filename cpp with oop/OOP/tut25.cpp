#include <iostream>
using namespace std;

class employee{
    int id;
    int salary;
    public:
        void setID(void){
            
            cout<<"Enter the id of emp: "<<endl;
            cin>>id;
        }
        void getID(void){
            cout<<"the id of emp is: "<<id<<endl;
        }
};

int main(){
    employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setID();
        fb[i].getID();
    }
      
    return 0;
}