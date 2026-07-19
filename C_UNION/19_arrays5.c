#include <stdio.h>

int positive(int* A,int n){
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(A[i] > 0){
            count++;
        }
    }
    return count;
}

int main(){
    int arr[]={12,-12,42,52,-24,-112,-0,10};
    printf("The number of positive nos is: %d",positive(arr, 8));
    return 0;
}