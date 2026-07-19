#include <stdio.h>

float c2f(float c);

float c2f(float c){
        return (9.0*c)/5.0 + 32;
}

int main(){
    int c;
    printf("enter the value of temp in celsius:\n");
    scanf("%d",&c);
    printf("The value of temp in fahrenheit is %f",c2f(c));
    return 0;
}