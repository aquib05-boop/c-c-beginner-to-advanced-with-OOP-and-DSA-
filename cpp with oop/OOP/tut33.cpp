#include <iostream>
using namespace std;

class bankdeposit{
    int principal;
    int years;
    float interestRate;
    float returnValue;

    public:
        bankdeposit(){};
        bankdeposit(int p, int y, float r);
        bankdeposit(int p, int y, int r);
        void show();
};

bankdeposit::bankdeposit(int p, int y, float r){
    principal=p;
    years=y;
    interestRate=r;
    returnValue=principal;
    for (int i = 0; i < y; i++)
    {
        returnValue=returnValue*(1+r);
    }
}

bankdeposit::bankdeposit(int p, int y, int r){
    principal=p;
    years=y;
    interestRate=(float)(r)/100;
    returnValue=principal;
    for (int i = 0; i < y; i++)
    {
        returnValue=returnValue*(1+interestRate);
    }
}

void bankdeposit::show(){
    cout<<endl<<"Principal amt "<<principal
        <<". Return value after "<<years
        <<" years is: "<<returnValue<<endl;
}

int main(){
    bankdeposit b1,b2,b3;
    int p, y, R;
    float r;
    cout<<"Enter the value of p y r R:"<<endl;
    cin>>p>>y>>r>>R;
    b1=bankdeposit(p,y,r);
    b2=bankdeposit(p,y,R);
    b1.show();
    cout<<"Interest rate in int:"<<endl;
    b2.show();

    return 0;
}