#include <stdio.h>

int main(){
    int arr[13] = {12,13,54,12,34,12,54,12,13,34,12,54,13};
    int largest = arr[0];
    int secondLargest = 0;
    int j = 0;
    for (int i = 1; i < 13; i++)
    {
        if (largest<arr[i])
        {
            secondLargest = largest;
            largest = arr[i];
        }    
        else if(arr[i]<largest && arr[i]>secondLargest){
            secondLargest = arr[i];
        }
    }
    printf("Largest element is %d\n", largest);
    if (secondLargest != -1)
    printf("Second largest element is %d\n", secondLargest);
else
    printf("No second largest element found.\n");
    return 0;
}
    // for(int i = 0; i<13 ; i++){
    // while(largest!=secondLargest && j<13)
    // {
    //     if (secondLargest<arr[j])
    //     {
        // printf("Largest element is %d\n",largest);
    //         secondLagest=arr[j];
    //     }
    //     j++;
    // }
    // }
    // printf("Second largest element is %d\n",secondLargest);