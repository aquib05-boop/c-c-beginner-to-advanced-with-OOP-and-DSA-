#include <stdio.h>
#include <stdlib.h>

void delete(int* arr, int index, int size){
    for (int i = index; i < size; i++)
    {
        arr[i] = arr[i+1];
    }
}
void input(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        printf("Enter the %d th index element:", i);
        scanf("%d",&arr[i]);
    }
}
void display(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
       printf("%d ", arr[i]); 
    }
    printf("\n");
}

int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int* arr = (int*)malloc(size * sizeof(int));
    input(arr, size);
    display(arr, size);
    delete(arr,3,size);
    size--;
    arr = (int*)realloc(arr,size * sizeof(int));
    display(arr, size);
    return 0;
}