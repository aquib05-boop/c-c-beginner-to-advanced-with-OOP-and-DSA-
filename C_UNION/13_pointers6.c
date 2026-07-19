#include <stdio.h>

int main(){
    int i = 9;
    int* j = &i;
    int** k = &j;
    printf("The value of pointer to pointer is:%d\n", 9);//9
    printf("The value of pointer to pointer is:%d\n", *(&i));//9
    printf("The value of pointer to pointer is:%p\n", j);// address of i
    printf("The value of pointer to pointer is:%p\n ", &j );//address of j
    printf("The value of pointer to pointer is:%d\n ", **(&j) );//should give 9
    printf("The value of pointer to pointer is:%p\n ", k );//address of j

    return 0;
}