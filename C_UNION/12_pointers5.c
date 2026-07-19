#include <stdio.h>

void calculate(int a, int b, int* sum, float* avg){
    *sum = a+b;
    *avg = (float)*sum/2;
}

int main(){
    int num1 =10, num2 = 20;
    int sum;
    float average;

    calculate(num1, num2, &sum, &average);

    printf("The sum is: %d \n", sum);
    printf("The average is: %.2f \n", average);
    return 0;
}