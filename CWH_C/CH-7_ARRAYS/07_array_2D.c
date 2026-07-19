// #include <stdio.h>

// int main(){
//     int arr[3][2];
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 2 ; j++)
//         {
//             printf("Enter the value of arr[%d][%d]\n",i,j);
//             scanf("%d ",&arr[i][j]);
//         }       
//     }
    
//     for (int i = 1; i <= 3; i++)
//     {
//         for (int j = 0; j < 2 ; j++)
//         {
//             printf("%d",arr[i][j]);

//         }   
//         printf("\n");   
//     }
//     return 0;
// }
#include <stdio.h>

int main(){
    int arr[3][2];

    // Corrected input loop
    for (int i = 0; i < 3; i++)   // Start from 0
    {
        for (int j = 0; j < 2 ; j++)
        {
            printf("Enter the value of arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);  // Removed space
        }       
    }

    // Printing the array
    for (int i = 0; i < 3; i++)   // Start from 0
    {
        for (int j = 0; j < 2 ; j++)
        {
            printf("%d ", arr[i][j]);
        }   
        printf("\n");   
    }

    return 0;
}
