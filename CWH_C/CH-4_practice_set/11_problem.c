// do problem 10 with other loops/
#include <stdio.h>

int main(){
    int n,prime=1;
    int j=2;
    printf("Enter a number\n");
    scanf("%d",&n);
    if (n>2)
    {
        while (j<n)
        {
          if (n%j!=0)
          {
            prime=1;
          }
          break;
        }        
    }
    else if (n<2 || n<0)
    {
        prime=0;
    }
    else if(n=2)
    {prime=1;
    }
    
    if(prime){
        printf("%d is prime",n);
    }
   return 0;
}