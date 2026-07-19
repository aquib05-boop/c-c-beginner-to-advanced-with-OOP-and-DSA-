// how can we find total occurences of duplicates?

#include <stdio.h>

int main() {
    int n = 7;  
    int arr[] = {1, 2, 3, 2, 4, 3, 3};  // Example array
    int visited[n];  // To track counted elements
    int totalDuplicates = 0;

    // Initialize visited array to 0
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }

    // Counting duplicates
    for (int i = 0; i < n; i++) {
        if (visited[i] == 1)  // Skip already counted elements
            continue;

        int count = 1;  // 1 occurrence of arr[i]
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;  // Found duplicate
                visited[j] = 1;  // Mark duplicate as counted
            }
        }

        if (count > 1) {
            printf("Element %d appears %d times\n", arr[i], count);
            totalDuplicates += (count - 1);  // Add extra occurrences
        }
    }

    printf("Total duplicate occurrences: %d\n", totalDuplicates);

    return 0;
}
