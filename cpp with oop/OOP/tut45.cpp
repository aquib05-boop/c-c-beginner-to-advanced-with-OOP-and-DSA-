#include <iostream>
using namespace std;

class student{
    protected:
        int rollNo;
    public:
        void setnumber(int a){
            rollNo=a;
        }
        void printnumber(){
            cout<<"Your roll no is: "<<rollNo<<endl;
        }
};

class test:virtual public student{
    protected:
        float maths, physics;
        public:
            void setmarks(float m1,float m2){
                maths=m1;
                physics=m2;
            }
            void printmarks(){
                cout<<"Your result is here:"<<endl
                    <<"Maths: "<<maths<<endl
                    <<"Physics: "<<physics<<endl;
            }
};

class sports:virtual public student{
    protected:
        float score;
    public:
        void setscore(float sc){
            score=sc;
        }
        void printscore(){
            cout<<"Your PT score is: "<<score<<endl;
        }
};

class result:public test,public sports{
    private:
        float total;
    public:
        void display(){
            total=maths+physics+score;
            printnumber();
            printmarks();
            printnumber();
            printscore();
            cout<<"Your total score is: "<<total<<endl;
        }
};

int main(){
    result harry;
    harry.setnumber(24);
    harry.setmarks(78,99);
    harry.setscore(9);
    harry.display();
    return 0;
}