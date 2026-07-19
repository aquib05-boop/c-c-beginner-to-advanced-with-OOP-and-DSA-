#include <stdio.h>

int main(){
    float c,f;

    printf("Enter temperature in (c) \n");
    scanf("%f",&c);

    f=(9.0/5.0)*c + 32;
    printf("the temperature is as hot as %f F" , f);
    return 0;
}