#include <stdio.h>

void check_prime(int);
// divisible by 1 and by itself
void check_prime(int n){
 
    if (n>=0 && n< 2)
    {
      printf("NOT A PRiME NUMBER");
    }
    else if(n >=2){
    for(int i=2;i<=n/2;i++){
        
        if( n%i == 0){
            printf("The given number %d is not prime", n);
            break;
        }
      }
     }
    }
    
int main(){
    check_prime(9);
    return 0;
}//partial correct, not included the case when the number is prime