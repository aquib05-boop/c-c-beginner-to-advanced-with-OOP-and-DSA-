#include <stdio.h>

int main() {
    int n = 4, cnt = 1; // Initialize cnt to 1 for the first number

    for (int i = 1; i <= n; i++) { // Loop for rows
        // Print leading spaces for pyramid alignment
        for (int space = 1; space <= n - i; space++) {
            printf(" ");
        }

        // Print numbers in the current row
        for (int j = 1; j <= i; j++) {
            printf("%d ", cnt);
            cnt++; // Increment the counter
        }

        printf("\n"); // Move to the next line after each row
    }

    return 0;
}