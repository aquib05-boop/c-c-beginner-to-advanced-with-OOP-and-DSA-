#include <stdio.h>

int* nextGreatestEle(int *arr, int n){
    for(int i=0;i<n;i++){
        if(i==n-1)arr[i]=-1;
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                arr[i]=arr[j];
                break;
            }
            else if(j==n-1){
                arr[i]=-1;
            }
        }
    }
    return arr;
}

int main(){
    int arr[5]={5,4,3,1};
    nextGreatestEle(arr,5);
    for(int i=0;i<5;i++)printf("%d ",arr[i]);
    return 0;
}