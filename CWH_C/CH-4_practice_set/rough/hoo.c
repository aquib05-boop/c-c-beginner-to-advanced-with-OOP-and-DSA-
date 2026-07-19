#include <stdio.h>

int main() {
    int n, input, sum = 0;
    
    printf("Enter the total number of entries:\n");
    scanf("%d", &input);

    for (int i = 0; i < input; i++) {
        printf("Enter a number:\n");
        scanf("%d", &n);

        // Check if the number is odd and within the range 0-50
        if (n % 2 != 0 && n >= 0 && n <= 50) {
            sum += n;
        }
    }

    printf("The total sum of valid odd numbers is: %d\n", sum);
    
    return 0;
}
