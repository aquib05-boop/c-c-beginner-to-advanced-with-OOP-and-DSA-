#include <stdio.h>

void printArray(int arr[], int index, int size) {
    if (index == size) {
        return; // base case: stop when end of array is reached
    }

    printf("Element at index %d is: %d\n", index, arr[index]);

    // Recursive call with next index
    printArray(arr, index + 1, size);
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Array elements:\n");
    printArray(arr, 0, size);

    return 0;
}
