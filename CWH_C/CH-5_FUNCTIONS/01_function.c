#include <stdio.h>
// Function prototype
int sum(int,int);               // result in c lang is called return value,in this case it's "int"

// Function definition              //before main or afetr main, won't affect
int sum(int x, int y){
    // printf("The sum is %d\n", x+y);
    return x+y;
}
// main function is the entry point in any c program
int main(){
    int a =1;
    int b = 2;
    
    int c = sum(a,b);//Function call    //main function pasues here until this is executed   
    //a & b are parameters
    printf("%d\n", c);
    // main function gets paused & sum funciton gets opened
    // returns to main
    int a1 = 2, b2=4;
    int c1 = sum(a1,b2);//Function call
    printf("%d",c1);
    return 0;
}
// can we not save the logic to sum instead of writing it again & again?!
// functions help to separate logic