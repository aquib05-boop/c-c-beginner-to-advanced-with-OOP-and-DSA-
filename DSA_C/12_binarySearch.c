#include <stdio.h>

int binarySearch(int arr[], int size, int element){
    int low=0,high=size-1,mid =(low+high)/2;

    while(low<=high){
    mid = (high+low)/2;
        if(arr[mid]==element){
            return mid;
        }
        else if(arr[mid]<element){
            low = mid+1;
        }
        else if(arr[mid]>element){
            high = mid-1;
        }
    }
    return -1;
}
int main(){
    int arr[] = {12,34,56,213,234,432,543,623,4845};
    int size = sizeof(arr)/sizeof(int);
    int element = 213;
    int searchIndex = binarySearch(arr, size, element);
    printf("The element %d is found at index %d",element,searchIndex);
    return 0;
}


// #include <stdio.h>

// int main(){
//     int size = 8;
//     int arr[8] = {12,14,16,19,23,53,78,99};
//     int element = 78;
//     int lb = 0 ,ub = size-1;
//     int mid = (ub+lb)/2;

// while(1){
//     if(arr[mid]=element){
//         printf("Element %d found at index %d",element,mid);
//         break;
//     }
//     else if(arr[mid]>element){
//         lb = mid;
//     }
//     else if(arr[mid]<element)
//         ub = mid;
// }
//     return 0;
// }