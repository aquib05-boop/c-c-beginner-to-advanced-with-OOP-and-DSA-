#include <stdio.h>

int main(){
    int n = 5,max,arr[n],j,i;
   
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    max = arr[0];
    for (j = 0; j < n; j++)
    {
        if (arr[j]>max)
        {
            max = arr[j];
            i=j;
        }
    }
    printf("The maximum value of the arrays is %d at index %d",max,i);
    return 0;
}