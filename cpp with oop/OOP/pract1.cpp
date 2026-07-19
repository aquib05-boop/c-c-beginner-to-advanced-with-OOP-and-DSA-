#include <iostream>
using namespace std;

class details{
    string name;int roll;
    public:
    // details s(){};
        friend details setdetails(details s);
        void getdetails(details s){
            cout<<setdetails(s).name<<endl;
            cout<<setdetails(s).roll<<endl;
        }
};
details setdetails(details s){
    s.name = "Rahul";
    s.roll = 23;
    return s;
}
int main(){
    details z;
    z.getdetails(z);
    return 0;
}