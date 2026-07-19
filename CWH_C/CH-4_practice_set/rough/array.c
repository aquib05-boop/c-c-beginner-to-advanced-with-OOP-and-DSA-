#include <stdio.h>

int main(){
    int marks[2][4] = {{45,34,65,65},
                         {34,43,54,767}}; //declaration with initialisation
//     int marks[4];
//     marks[0] = 34;
// for (int i = 0; i < 4; i++)
// {
//     printf("Enter the value of %d element of the array\n",i);
//     scanf("%d",&marks[i]);
// }
for (int i = 0; i < 2; i++)
{   for (int j = 0; j<4; j++)
{
//    printf("the value of %d, %d element of the array is %d\n",i,j, marks[i][j]);
    printf("%d ", marks[i][j]);
}
    printf("\n");
}


    // printf("The marks of sdutent 1 is %d\n",marks[0]);
    // marks[0]= 334;
    // printf("The maeks of student 1 is %d\n",marks[0]);
    
    return 0;
}
