#include <stdio.h>

int fact(int);

int fact(int n){
    if(n==0 || n==1)
     return 1;
    else
    return n* fact(n-1);
}
int main(){
    fact(4);
    printf("The value of factorial 4 is %d", fact(4));
    return 0;
}