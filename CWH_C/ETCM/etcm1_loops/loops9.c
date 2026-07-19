#include <stdio.h>

int main(){
    int n = 6;
    for (int i = 1; i <= n; i++)
    {
       for (int j = 0,cnt =0; j < i; j++)
       {
          if(i%2==0){
            printf("%d", cnt);
            cnt=!cnt;
          }
          else if (i%2!=0)
          {
            cnt=!cnt;
            printf("%d",cnt);           
          }          
       }
       printf("\n");
    }
    return 0;
}