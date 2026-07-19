#include <stdio.h>

int main(){
    int a ;
    int b ;
    printf("Provided that A>B,both are integer values\n");
    printf("Enter the value of A\n");
    scanf("%d", &a);
    printf("\nEnter the value of other number B\n");
    scanf("%d", &b);
    int c = a+b;
    printf("\nthe value a is %d,the value of b is %d, and sum is %d \n \n",a ,b,c);
    //Modulus operator is used to get the remainder
    printf("the remainder when a is divided by b is %d", a%b);
    return 0;
}