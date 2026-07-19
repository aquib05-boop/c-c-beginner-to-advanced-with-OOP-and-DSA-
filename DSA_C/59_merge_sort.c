#include <stdio.h>
#include <string.h>

void merge(int arr[],int low, int mid, int high){
    int arr2[high+1];
    int i,j,k;
    i=low, j=mid+1, k=low;
    while(i<=mid && j<=high){
        if(arr[i]<arr[j]){
            arr2[k]=arr[i];
            i++;k++;
        }
        else{
            arr2[k]=arr[j];
            j++;k++;
        }
    }
    while(i<=mid){
        arr2[k]=arr[i];
        i++;k++;
    }
    while(j<=high){
        arr2[k]=arr[j];
        j++;k++;
    }
    for (int i = low; i <= high; i++)
    {
        arr[i]=arr2[i];
    }
}

void MS(int arr[], int low, int high){
    if(low<high){
        int mid = (low+high)/2;
        MS(arr, low, mid);
        MS(arr, mid+1, high);
        merge(arr, low, mid, high);
    }
}

int main(){
    int size;
    printf("Enter the number of elements: ");
    scanf("%d",&size);
    int arr[size];

    printf("Enter the elements(row by row, space separated):\n");
    
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }

    MS(arr, 0, size-1);

    printf("\nSorted arry: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}