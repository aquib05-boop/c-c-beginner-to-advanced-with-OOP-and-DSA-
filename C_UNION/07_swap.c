#include <stdio.h>

void swap();

void swap(int* x, int* y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int a = 8;
    int b = 9;
    swap(&a,&b);
    printf("%d %d ",a,b);
    return 0;
}