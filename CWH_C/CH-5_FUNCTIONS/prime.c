#include <stdio.h>

int main(){
    int n;
    int non_prime;
    printf("Enter any non-negative number\n");
    scanf("%d",&n);
    if(n<2){
        non_prime = 1;
    }
    else{
        for (int i = 2; n % i == 0; i++)
        {
            non_prime=0;
            break;
        }
    if(non_prime){
        printf(" The entered number %d is non prime",n);
    }
    else{
        printf("The entered number %d is prime",n);
    }
    }
    return 0;
}