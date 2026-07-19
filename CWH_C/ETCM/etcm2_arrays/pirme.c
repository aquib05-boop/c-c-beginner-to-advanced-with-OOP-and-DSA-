#include <stdio.h>

int main(){
    int n ;
    printf("Enter any number: ");
    scanf("%d",&n);
    int not_prime = 1;
    if (n!=0 && n!=1 )
    {
        for (int i = 2; i <n; i++)
        {
           if (n%i == 0)
           {
             not_prime = 1;
             break;
           }
           else{
            not_prime = 0;
           }
        }
        
    }
    if(not_prime){
        printf("NOT PRIME");
    }
    else {
        printf("PRIME");
    }
    return 0;
}