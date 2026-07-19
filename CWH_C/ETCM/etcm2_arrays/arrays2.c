#include <stdio.h>

int main(){
    int n =5 ,arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
       scanf("%d",&arr[i]);
    }
    for (int j = n-1; j  >= 0; j--)
    {
        printf("The value of arr[%d] is %d || ",j,arr[j]);
    } 
    return 0;
}