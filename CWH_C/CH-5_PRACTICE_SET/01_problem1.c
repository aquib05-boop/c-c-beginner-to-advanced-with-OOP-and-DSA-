#include <stdio.h>

float averaege(int,int,int);

float average(int a, int b, int c){
    return (a+b+c)/3.0;
}
int main(){
    int a1=6;
    int a2=7;
    int a3=3;
    average(a1,a2,a3);
    printf("The average of the nos is %.3f",average(a1,a2,a3));
    return 0;
}