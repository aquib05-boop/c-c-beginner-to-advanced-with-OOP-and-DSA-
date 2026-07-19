#include <stdio.h>

int main(){
    int n ,  i = 1;
    printf("Enter any number n \n");
     scanf("%d", &n);

// why on putting ';' , after n, it doesn't work

    do{
        printf("%d\n", i);
        i++;
    
    } while (i<=n);
    
    return 0;
}