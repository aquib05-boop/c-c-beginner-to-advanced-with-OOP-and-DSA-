#include <stdio.h>

int main(){
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int space = 0; space < n-i ;+space++)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    
    return 0;
}