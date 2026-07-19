#include <stdio.h>

int main(){
    int i = 6;
    int* j = &i;    //it is a pointer which stores the address of an int
    int** k = &j;  //stores teh address of the pointer storing an address

    printf("The value of i is %d\n\n",&i);
    printf("The value of i is %d\n\n",*j);
    printf("The value of i is %d\n\n",*k);
    printf("The value of i is %d\n\n",**(&j));
    return 0;
}