#include <stdio.h>

int sum(int);

int sum(int n){
    int  sum =0;
    for (int i = 1; i <= n; i++)
    {
        sum+=i;
    }
    return sum;
}

int main(){
    printf("The sum of first 12 natural numbers is %d", sum(12));
    return 0;
}