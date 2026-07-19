#include <stdio.h>

int main(){
    char i = 'A';
    char* j= &i;     //j is a pointer pointing to i(j is a character pointer)
    
    float k=87.234;
    float* h=&k;

    printf("The address of i is %p\n",&i);
    printf("The address of i is %p\n",j);
    printf("The value at address i is %p\n",*(&i));
    printf("The value at address i is %d\n",*j);        //why is %d used and not %f

    printf("The address of k is %p\n",&k);
    printf("The vale at address k is %f\n",*(&k));
    return 0;
}