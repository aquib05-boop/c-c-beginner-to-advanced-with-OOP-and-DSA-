#include <stdio.h>

int lenArray(int* arr, int n) {
    return n;
}

int main() {
    int arr[] = {12,13,14,15};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", lenArray(arr, size));
    return 0;
}