#include <iostream>
using namespace std;

class y;
class x{
    int data1;
    
    friend void exchange(x &c1, y& c2);
public:
    void setData(){
        cout<<"Enter the data for x: "<<endl;
        cin>>data1;
    }
    void display(){
        cout<<"class x, val = "<<data1<<endl;
    }
};

class y{
    int data2;
    friend void exchange(x &c1, y& c2);
    public:
        void setData(){
            cout<<"Enter the data for y: "<<endl;
            cin>>data2;
        }
        void display(){
        cout<<"class y, val = "<<data2<<endl;
    }
};

void exchange(x &c1, y& c2){
    int temp =c1.data1;
    c1.data1=c2.data2;
    c2.data2=temp;
}


int main(){
    x c1;
    y c2;
    c1.setData();
    c1.display();

    c2.setData();
    c2.display();
    
    exchange(c1, c2);
    
    c1.display();
    c2.display();
    return 0;
}