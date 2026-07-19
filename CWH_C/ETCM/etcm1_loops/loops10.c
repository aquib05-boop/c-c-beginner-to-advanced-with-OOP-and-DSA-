#include <stdio.h>

int main(){
    int n ;
    printf("Enter any number n:");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int space = 0; space < n - i; space++)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = n-1; i >= 0; i--)
    {
        for (int space = n; space > i; space--)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}