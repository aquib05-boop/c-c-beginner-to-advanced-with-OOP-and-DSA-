#include <stdio.h>

int equivalencePoint(int* arr, int size){
    int totalSum=0;
    for(int i=0;i<size;i++){
        totalSum+=arr[i];
    }

    int leftSum = 0;
    for(int i=0;i<size;i++){
        totalSum-=arr[i];
        if(leftSum==totalSum) return i;
        leftSum+=arr[i];
    }
    return -1;
}

int main(){
    int arr[]={-7,1,5,2,-4,3,0};
    // printf("%d", sizeof(arr)/sizeof(int));
    printf("The equivalence point is: %d",equivalencePoint(arr,7));
    return 0;
}