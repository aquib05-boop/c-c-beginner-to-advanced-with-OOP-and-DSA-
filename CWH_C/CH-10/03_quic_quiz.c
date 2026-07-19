#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int* ptr;
    scanf("%d", &n);
    ptr = (int*) calloc(n, sizeof(int));
        // int arr[n]; //not allowed in c;;
    ptr[0] = 3;
    printf("%d", ptr[0]);
    return 0;
}
// in malloc, all values are garbage values, when uninitialised,
// whereas in calloc, values are 0