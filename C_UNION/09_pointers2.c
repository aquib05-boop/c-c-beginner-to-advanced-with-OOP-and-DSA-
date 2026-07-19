#include <stdio.h>

void address();

void address(int* n){
    printf("%p", n);
    printf("using functions, the address is: %p");
}

int main(){
    int i = 7;
    int* z = &i;
    printf("The address of i is %p \n", z);
    address(z);
    return 0;
}