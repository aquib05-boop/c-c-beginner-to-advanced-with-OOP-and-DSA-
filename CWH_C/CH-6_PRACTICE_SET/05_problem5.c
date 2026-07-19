#include <stdio.h>

void sum(int a, int b){
    printf("The sum is %d\n",a+b);
}

void average(int a, int b){
    printf("the average is %.3f\n", a+b/2.0);
}

int main(){
    int x = 4;
    int y = 7;

    sum(x,y);
    average(x,y);
    return 0;
}

// 6:30:00