#include <stdio.h>

void display(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int indInsertion(int arr[], int size, int element, int capacity, int index){
    if(size>=capacity){
        return -1;
    }
    for (int i = size; i >= index; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    return 0;
}

int countArray(int arr[]){
    int count = 0, i = 0;
    while(arr[i]!='\0'){
        count++;
        i++;
    }
    return count;
}

int main(){
    int arr[100]= {1,2,34,65,3};
    int size = countArray(arr);

    display(arr, size);
    int element = 625,capacity = 100,index =3;
    indInsertion(arr, size, element, capacity, index);

    printf("\nThe size of the array is %d\n",size);
    display(arr, size);
    return 0;
}
// MODIFY THIS SO THAT, IT INDICATES WHETHER THE INSERTION IS SUCCESSFULL OF NOT