#include <stdio.h>

int largest(int size, int arr[size]){
    int temp = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (temp<arr[i])
        {
           temp = arr[i]; 
        }
        else if(temp>arr[i]){
            continue;
        }
    }
    printf("%d", temp);
    return 0;
}

int main(){
    int size = 6;
    int arr[6] = {23,12,64,23,43,253};
    largest(size, arr);
    return 0;
}