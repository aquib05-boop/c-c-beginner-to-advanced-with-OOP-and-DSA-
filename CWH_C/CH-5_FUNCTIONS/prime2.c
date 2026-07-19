#include <stdio.h>

int main(){
    int prime,n;
    printf("Enter a numbr n\n");
    scanf("%d",&n);
    if(n<2){
        prime = 0;
    }
    else{
        for (int i = 1; i < n && n%i == 0; i++)
        {        
            printf("%d is non prime\n");
            break;
        }
        
    }
    if(prime == 0){
        printf("%d is non prime");
    }
    return 0;
}