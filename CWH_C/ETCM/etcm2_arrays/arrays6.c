#include <stdio.h>

int main(){
    int arr[13] = {12,13,54,12,34,12,54,12,13,34,12,54,13};
    int visited[13] = {0};  // To mark counted elements
    int count;

    for (int i = 0; i < 13; i++) {
        if (visited[i] == 1)
            continue;  // Skip if already counted

        count = 1;  // Count the current element itself

        for (int j = i + 1; j < 13; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1;  // Mark as counted
            }
        }

        printf("Quantity of %d is %d\n", arr[i], count);
    }
    return 0;
}
