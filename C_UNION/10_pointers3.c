#include <stdio.h>

int tenx();

int tenx(int n){
    return n*10;
}

int main(){
    int z = 6;
    printf("the multiplied number is: %d",tenx(z));
    return 0;
}