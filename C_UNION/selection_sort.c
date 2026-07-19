#include <stdio.h>

void printArray(int *A, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
void selectionSort(int* A, int n){
    int indexOfMin;
    int j,i;
    printf("Running selectionSort.....\n");
    for ( i = 0; i < n-1; i++)
    {
        indexOfMin = i;
        for (j = i+1; j < n; j++)
        {
            if(A[j]<A[indexOfMin]){
                indexOfMin = j;
            }
        }
        // swapping after each pass completes
        int temp = A[i];
        A[i]=A[indexOfMin];
        A[indexOfMin ] = temp;
    }
    
}

int main(){
    //01, 02, 03, 04, 05
    //03, 05, 02, 13, 12

    // After first pass
    //02, 05, 03, 13, 12
    int A[]={3,5,2,13,12};
    int n = 5;
    printArray(A,n);
    selectionSort(A,n);
    printArray(A,n);
    return 0;
}