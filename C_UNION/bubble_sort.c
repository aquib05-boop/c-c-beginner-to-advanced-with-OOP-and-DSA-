#include <stdio.h>

int main(){
    int arr[] = {12,9,23,42,21,2,1};
    int pass = 0;

    for (int j = 0; j < 7; j++)
    {
    for(int i = 0; i < 7; i++){
        if(arr[i]>arr[i+1]){
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
        }
        else continue;
     }
     pass+=1;
    }

    for (int i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("The number of passes are: %d", pass);
    return 0;
}