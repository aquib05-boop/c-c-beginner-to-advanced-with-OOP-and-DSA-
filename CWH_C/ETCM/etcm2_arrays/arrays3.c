#include <stdio.h>

int main(){
    int arr1[5];
    int arr2[5];
    printf("Enter the value of arr1:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&arr1[i]);
    }
//    b = 5;
    for (int j = 0; j < 5; j++)
    {
        arr2[j] = arr1[j];
        printf("The value at index %d is %d in arr2\n", j , arr2[j]);
    }
    printf("\n");
    
    return 0;
}