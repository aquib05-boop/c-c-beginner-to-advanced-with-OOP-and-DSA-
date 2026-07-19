#include <stdio.h>

int main(){
    int marks[5];
    printf("enter marks\n");
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &marks[i]);   
        ptr=ptr+i;
    }

    for (int i = 0; i < 6; i++)
    {
        printf("the address of marks at index %d is %u\n",i,&marks[i]);
    }
     
    return 0;
}