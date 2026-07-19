#include <stdio.h>

int main() {
    int n, sum = 0;
    
    // Read the user input
    scanf("%d", &n);
    
    // Loop to sum odd numbers up to n
    for (int i = 1; i <= n; i++) { 
        if (i % 2 != 0) {
            sum += i;
        }
    }

    // Print the result
    printf("Sum of odd numbers up to %d: %d\n", n, sum);
    
    return 0;
}
