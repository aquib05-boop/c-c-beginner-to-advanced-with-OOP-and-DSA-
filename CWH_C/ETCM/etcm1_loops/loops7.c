#include <stdio.h>

int main(){
    int n = 4,cnt =0;
    for (int i = 1; i <= n; i++)
    {

        
        for (int k = n; k>0 ; k--)
        {
            printf(" ");
        }  
        for (int j = 0; j < i; j++)
        {
            printf("%d ",cnt + j + 1); 
        }
        printf("\n");
        cnt+=i;
    }
    
    return 0;
}

//   1
//  2 3
// 4 5 6  
