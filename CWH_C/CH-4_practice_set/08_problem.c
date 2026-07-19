#include <stdio.h>

int main(){
    // 8!=8*7*6*5*4*3*2*1
    int product =1;
    int n;
    printf("enter the number for factorial\n");
    scanf("%d\n", &n);
    for ( int i = 1; i <=n; i++)
    {
        product *= i; 
    }
    printf("The factorial of %d is %d", n,product);
    
    return 0;
}