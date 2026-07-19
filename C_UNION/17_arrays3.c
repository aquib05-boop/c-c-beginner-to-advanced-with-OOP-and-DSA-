#include <stdio.h>

void rev(int* A,int n){
    int temp;
    for (int i = 0; i < n/2; i++)
    {
        temp = A[i];
        A[i] = A[n-1-i];
        A[n-1-i]=temp;
        
    }
    for(int i = 0; i<n;i++)
    printf("%d ", A[i]);
}

int main(){
    int A[] = {12,14,16,18,20};
    rev( A, 5);
    return 0;
}