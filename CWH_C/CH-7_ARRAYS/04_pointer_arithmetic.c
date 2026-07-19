#include <stdio.h>

int main(){
    int a =5;
    int *ptr =&a;
    printf("The address of a is % u\n", &a);
    printf("The address of a is % u\n",*ptr);
    ptr++;      //this increases the value of the number of bytes,by the same which is used be the term,i.e,int/char
    printf("the value of ptr is %d\n", *ptr);
    return 0;
}