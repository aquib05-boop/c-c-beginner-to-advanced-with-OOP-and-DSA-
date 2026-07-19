#include <stdio.h>
#include <stdlib.h>

int main(){
    float n = 5;
    float *ptr;
    ptr = (float*) malloc(n * sizeof(float));
    ptr[0]=32.42;
    ptr[1]=123.23;
    ptr[2]=232.24;
    ptr[3]=24.12;
    ptr[4]=321.754;

    printf("%.2f\n",ptr[0]);
    printf("%.2f\n",ptr[1]);
    printf("%.2f\n",ptr[2]);
    printf("%.2f\n",ptr[3]);
    printf("%.2f\n",ptr[4]);
    return 0;
}
// in malloc, all values are garbage values, when uninitialised,
// whereas in calloc, values are 0