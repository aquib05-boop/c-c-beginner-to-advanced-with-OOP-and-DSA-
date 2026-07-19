#include <stdio.h>

int main(){
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("The table of the given number is as follows:- \n");
    for (int i= 1; i < 11 ; i++){
        printf("%d X %d = %d \n",n , i , n*i);
        }
    return 0;
}