#include <stdio.h>

int main(){
    int a;
    int* ptr = &a ;
    a = 9;
    printf("The address of 'a' is %u\n",ptr);
    printf("The value of 'a' at address %d is %d\n",ptr , a);
    return 0;
}