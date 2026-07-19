#include <stdio.h>

int main(){
    int arr[7] = {12,34,65,75,86,92};
    int pos = 3, element = 69;
    for (int i = 5; i > 2 ; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[pos] = element;
    for (int i = 0; i < 7; i++)
    {
        printf("Element at indedx %d is: %d\n",i,arr[i]);
    }
    return 0;
}