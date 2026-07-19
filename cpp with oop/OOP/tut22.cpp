#include <iostream>
using namespace std;

class worker
{
    private:
        string name;
        int salary;
    public:
        void getName(){
            cout<<"Enter the employee name: ";
            cin>>name;
        }
        void getSalary(){
            cout<<"Enter the employee Wage: ";
            cin>>salary;
        }

        void getDetails(){
            getName();
            getSalary();
        }
        void showData(){
            cout<<"Employee: "<<name<<endl;
            if(salary>50000) cout<<"Party de bhai!"<<endl;
            else cout<<"Expenses kaise manage karta hai bhai??"<<endl;
        }
};

int main(){
    worker e1;
    e1.getDetails();
    e1.showData();
    return 0;
}