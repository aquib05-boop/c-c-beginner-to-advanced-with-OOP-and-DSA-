#include <stdio.h>

int fibonacci(int);

int main(){
    fibonacci(5);
    printf("The value is %d", fibonacci(5));
    return 0;
}

int fibonacci(int n){
    if(n==1 || n==2){
        return n-1;
    }
    return fibonacci(n-2) + fibonacci(n-1);
}
//0 1 1 2 3 5 8 13 21 34 55...