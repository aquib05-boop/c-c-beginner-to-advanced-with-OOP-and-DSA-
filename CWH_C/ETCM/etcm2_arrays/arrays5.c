#include <stdio.h>

// Function to merge two arrays
void mergeArrays(int arr1[], int arr2[], int merged[], int size) {
    int i, j;
    
    // Copy elements of arr1 to merged[]
    for (i = 0; i < size; i++) {
        merged[i] = arr1[i];
    }

    // Copy elements of arr2 to merged[]
    for (j = 0; j < size; j++) {
        merged[i + j] = arr2[j];
    }
}

// Function to sort an array in descending order
void sortDescending(int arr[], int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] < arr[j]) {  // Swap if the next element is greater
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int size;

    // Take size of arrays as input
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int arr1[size], arr2[size], merged[size * 2];

    // Input for first array
    printf("Enter elements of first array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input for second array
    printf("Enter elements of second array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merge both arrays
    mergeArrays(arr1, arr2, merged, size);

    // Sort merged array in descending order
    sortDescending(merged, size * 2);

    // Print the final sorted merged array
    printf("Merged array in descending order:\n");
    for (int i = 0; i < size * 2; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
