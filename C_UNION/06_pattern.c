#include <stdio.h>

void star(int);
void star(int n){
    int m;
    for (int i = 0; i < n; i++)
    {
    
        for (int j = 0; j < (2*i)+1; j++)
        {
            printf("* ");
        } 
        printf("\n\n");  
    }
}
int main(){
    star(5);
    return 0;
}