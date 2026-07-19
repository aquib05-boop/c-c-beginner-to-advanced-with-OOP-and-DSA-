#include <stdio.h>

int main(){
    int arr[7] = {12,34,65,75,86,92};
    int pos = 3;
    for (int i = pos; i < 6 ; i++)
    {
        arr[i] = arr[i+1];
    }

    for (int i = 0; i < 6; i++)
    {
        if (arr[i]!=0)
        {
            printf("Element at index %d is: %d\n",i,arr[i]);
            /* code */
        }
    }
    return 0;
}