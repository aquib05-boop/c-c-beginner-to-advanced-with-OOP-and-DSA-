#include <stdio.h>

int negative(int* A,int n){
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(A[i] < 0){
            count++;
        }
    }
    return count;
}

int main(){
    int arr[]={12,-12,42,52,-24,-112,-0,10};
    printf("The number of negative nos is: %d",negative(arr, 8));
    return 0;
}