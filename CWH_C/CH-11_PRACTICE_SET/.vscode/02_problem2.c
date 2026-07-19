#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 6;
    int* ptr = (int*) calloc(n, sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("%d \n", ptr[i]);
    }

    free(ptr); // releasing memory

    return 0;
}