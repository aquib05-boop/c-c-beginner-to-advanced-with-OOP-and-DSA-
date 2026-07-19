#include <stdio.h>

int main(){
    int n = 8 ,cnt =0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i;  j++)
        {
            printf("%d ",cnt+ j + 1);
        }
        printf("\n");
        cnt = cnt + i;
    }  
    return 0;
}