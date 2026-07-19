#include <stdio.h>

void change(int* n);

void change(int* n){
    
    *n = *n * 10;
    printf("The value after call by reference is : %d",*n);   
}

int main(){
    int x = 9;
    change(&x);
    return 0;
}