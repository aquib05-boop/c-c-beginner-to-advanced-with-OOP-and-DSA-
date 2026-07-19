// #include <stdio.h>

// int main(){
//     int arr[5];
//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d", &arr[i]);      
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d\n", arr[i]);
//     }
    
//     return 0;
// }

#include <stdio.h>

int main(){
    int arr1[]={1,3,4};
    int arr2[]={6,7,7};

    int*y = arr1;
    int*z = arr2;
    
    printf("The value of arr with index 0 is :%d\n",*y);//value of arr[0]
    z++;
    printf("The value of arr with index 1 is :%d\n",*y);//value of arr[1]

//subtraction of one pointer from another
    printf("Address of arr1 or y: %d\n",arr1);
    printf("Address of arr2 or z: %d\n",arr2);
    printf("Trying subtraction: %d\n\n", y-z);//y-z calculates the number of elements
    //difference in number of elements
    //here 2 is the difference as z++ has been used in the upper case

//addition of a number to a pointer
    printf("adding with pointer y: %d\n\n", 1+y); 
    
//subtraction of a number from a pointer
    printf("subtracting with pointer z: %d\n\n", z-1);    

//comparison of two pointer variables
    if (y>z)
    {
        printf("y is greater than z\n\n");
    }
    else{
        printf("z is greater than y\n\n");
    }
    return 0;
}