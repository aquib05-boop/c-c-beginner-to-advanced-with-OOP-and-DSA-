#include <stdio.h>

int main(){
    int a =5;
    int *ptr =&a;
    //ptr represents the memory address of a.
    //*ptr represents the value stored at that memory address (i.e., the actual value of a

    printf("The address of a is % u\n", &a);
    printf("The address of a is % u\n",ptr);
    ptr++; //utne hi bytes aage badh jaega, jitne bytes wo particular data type le rha hai 
        //this increases the value of the number of bytes,by the same which is used be the term,i.e,int/char
    printf("the value of ptr is %u\n", ptr);
    // in this case, for this being an integer, value increases by 4
    return 0;
}