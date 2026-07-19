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
    return 0;
}
// int n;
// scanf("%d", &n);
// float arr[n];  // This may or may not work (depends on compiler — VLA).
