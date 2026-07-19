#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int *ptr;
    printf("Enter the size of array\n");
    scanf("%d", &n);
    // int arr[n]; //not allowed in c
    ptr = (int*) malloc(n * sizeof(int));//malloc returns a null pointer
    ptr[0]=3;
    ptr[1]=5;
    printf("%d", ptr[0]);

    ptr = (int*) realloc(ptr, 10* sizeof(int));
    return 0;
}