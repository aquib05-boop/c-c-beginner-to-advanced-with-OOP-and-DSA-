#include <stdio.h>

float temp(float);

int main(){
    temp(38.4);
    return 0;
}

float temp(float C){
    float F;
    F = (9.0/5 * C) +32;
    printf("The value of temperature is %f", F);
    return F;
}