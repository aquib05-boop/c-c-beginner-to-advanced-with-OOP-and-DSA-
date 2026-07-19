#include <stdio.h>

int main() {
    int tables[3][10];

    // Fill the array with multiplication tables
    for (int i = 0; i < 10; i++) {
        tables[0][i] = 2 * (i + 1);  // Table of 2
        tables[1][i] = 7 * (i + 1);  // Table of 7
        tables[2][i] = 9 * (i + 1);  // Table of 9
    }

    // Print the tables
    for (int row = 0; row < 3; row++) {
        printf("Table of %d: ", (row == 0) ? 2 : (row == 1) ? 7 : 9);
        for (int col = 0; col < 10; col++) {
            printf("%d ", tables[row][col]);
        }
        printf("\n");
    }
    return 0;
}