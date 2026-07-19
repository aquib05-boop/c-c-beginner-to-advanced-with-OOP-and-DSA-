#include <iostream>
#include <string>
using namespace std;

class Employee{
    public:
        string name;
        int salary;

        Employee(string n , int s, int sp){
            this->name = n;
            this->salary = s;
            this->secretPassword = sp;
        }

        void printDetails(){ 
            cout<<"For first employee: "<<endl<<"His name is: "<<this->name<<endl<< "His salary is: "<<this->salary<<endl;
        }

        void getSecretPassword(){
            cout<<"The secret password of emp is: "<<this->secretPassword<<endl;
        }
    
    private:
        int secretPassword;
};

int main(){
    // int age;
    // cout<<"Enter your age"<<endl;
    // cin>>age;
    // if (age>100 || age<0)
    // {
    //     cout<<"invalid age";
    // }
    // else if(age>=18){
    //     cout<<"You can vote";
    // }
    // else if(age<18){
    //     cout<<"You cannot vote";
    // }
    // switch(age){
    //     case 12:
    //         cout<<"you're 12 years old"<<endl;
    //         break;
    //     case 18:
    //         cout<<"you're 18 years old"<<endl;
    //         break;
    //     default:
    //         cout<<"you're neither 12 nor 18 years old"<<endl;
    // }
    // string name = "Aquib";
    // cout<<"The name is "<<name<<endl;
    // cout<<"The length of  name is "<<name.length()<<endl;
    // cout<<"The name is "<<name.substr(1,2)<<endl;
    // cout<<"The name is "<<name.substr(2,5)<<endl;

    // int a = 34;
    // int* ptra;
    // ptra = &a;
    // cout<<"The value at address a is: "<<*ptra<<endl;
    // cout<<"The value at address a is: "<<*(&a)<<endl;
    // cout<<"The address of a is: "<<ptra<<endl;
    // cout<<"The address of a is: "<<&a<<endl;


Employee har("Godzilla", 34000, 345323);
// har.name = "Aquib";
// har.salary = 24000;
har.printDetails();
har.getSecretPassword();
// cout<<har.secretPassword;    //inaccessible due to private
    return 0;
}   