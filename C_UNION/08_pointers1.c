#include <stdio.h>

int main(){
    int x = 8;
    int* z = &x;
    printf("The address of %d is %u\n",x,z);
    printf("The value of pointer is : %d", *z);
    return 0;
}