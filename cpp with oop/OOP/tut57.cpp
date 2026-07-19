#include <iostream>
#include <string.h>
using namespace std;

class cwh{
    protected:
        string title;
        float rating;
    public:
        cwh(string s, float r){
            title=s;
            rating=r;
        }
        virtual void display(){}
};

class cwhvideo: public cwh{
    int videolength;
    public:
        cwhvideo(string s,float r, int vl):cwh(s,r){
            videolength=vl;
        }
        void display(){
            cout<<"This is an amazing vdo with tile: "<<title<<endl;
            cout<<"Ratings: "<<rating<<endl;
            cout<<"Length of video is: "<<videolength<<endl;
        }
};

class cwhtext: public cwh{
    int words;
    public:
        cwhtext(string s,float r, int vl):cwh(s,r){
            words=vl;
        }
        void display(){
            cout<<"This is an amazing vdo with tile: "<<title<<endl;
            cout<<"Ratings: "<<rating<<endl;
            cout<<"No. of words in this video is: "<<words<<endl;
        }
};

int main(){
    
    return 0;
}