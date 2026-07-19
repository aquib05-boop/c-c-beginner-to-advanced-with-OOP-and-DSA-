// #include <stdio.h>

// // C program to count duplicate elements in an array
// int main() {
//     int n = 5, count = 0, arr[n];

//     // Taking input for the array
//     printf("Enter %d elements of the array:\n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);  // Fix indexing issue
//     }

//     // Counting duplicate elements
//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) {  // Compare with the next elements
//             if (arr[i] == arr[j]) {
//                 count++;
//                 break;  // Avoid double counting
//             }
//         }
//     }

//     // Printing result
//     printf("The number of duplicate elements is: %d\n", count);

//     return 0;
// }





#include <stdio.h>
// c program to count the total numbers of duplicate elements in array
int main(){
    int n=5,count=0,arr[n];
    printf("ELements of array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr [j])
            {
              count+=1;
              break;
            }
        }
            
    }
    printf("The number of duplicate numbers is/are : %d",count);
    
    return 0;
}

// how can we find total occurences of duplicates?